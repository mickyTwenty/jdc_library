class ScopeInfo;

// Alias for HeapObject::IsScopeInfo() that avoids inlining.
V8_EXPORT_PRIVATE bool IsScopeInfo_NonInline(HeapObject o);

template <class D, class P>
class TorqueGeneratedScopeInfo : public P {
  static_assert(std::is_same<ScopeInfo, D>::value,
    "Use this class as direct base for ScopeInfo.");
  static_assert(std::is_same<FixedArrayBase, P>::value,
    "Pass in FixedArrayBase as second template parameter for TorqueGeneratedScopeInfo.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedScopeInfo<D,P>;

  inline int flags() const;
  inline void set_flags(int value);

  inline int parameter_count() const;
  inline void set_parameter_count(int value);

  inline int context_local_count() const;
  inline void set_context_local_count(int value);

  inline String context_local_names(int i) const;
  inline String context_local_names(IsolateRoot isolates, int i) const;
  inline void set_context_local_names(int i, String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline int context_local_infos(int i) const;
  inline void set_context_local_infos(int i, int value);

  inline int context_local_infos() const;
  inline void set_context_local_infos(int value);

  inline int saved_class_variable_info(int i) const;
  inline void set_saved_class_variable_info(int i, int value);

  inline int saved_class_variable_info() const;
  inline void set_saved_class_variable_info(int value);

  inline int receiver_info(int i) const;
  inline void set_receiver_info(int i, int value);

  inline int receiver_info() const;
  inline void set_receiver_info(int value);

  // Torque type: (Undefined | class String)
  inline PrimitiveHeapObject inferred_function_name(int i) const;
  inline PrimitiveHeapObject inferred_function_name(IsolateRoot isolates, int i) const;
  inline void set_inferred_function_name(int i, PrimitiveHeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (TheHole | class ScopeInfo)
  inline HeapObject outer_scope_info(int i) const;
  inline HeapObject outer_scope_info(IsolateRoot isolates, int i) const;
  inline void set_outer_scope_info(int i, HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline FixedArray locals_block_list(int i) const;
  inline FixedArray locals_block_list(IsolateRoot isolates, int i) const;
  inline void set_locals_block_list(int i, FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: SourceTextModuleInfo
  inline FixedArray module_info(int i) const;
  inline FixedArray module_info(IsolateRoot isolates, int i) const;
  inline void set_module_info(int i, FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline int module_variable_count(int i) const;
  inline void set_module_variable_count(int i, int value);

  inline int module_variable_count() const;
  inline void set_module_variable_count(int value);

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }
#ifdef VERIFY_HEAP
  V8_EXPORT_PRIVATE void ScopeInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kFlagsOffset = P::kHeaderSize;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  static constexpr int kParameterCountOffset = kFlagsOffsetEnd + 1;
  static constexpr int kParameterCountOffsetEnd = kParameterCountOffset + kTaggedSize - 1;
  static constexpr int kContextLocalCountOffset = kParameterCountOffsetEnd + 1;
  static constexpr int kContextLocalCountOffsetEnd = kContextLocalCountOffset + kTaggedSize - 1;
  static constexpr int kHeaderSize = kContextLocalCountOffsetEnd + 1;
  static constexpr int kContextLocalNamesOffset = kContextLocalCountOffsetEnd + 1;
  static constexpr int kContextLocalNamesOffsetEnd = kContextLocalNamesOffset + 0 - 1;
  inline int ContextLocalInfosOffset() const;
  inline int SavedClassVariableInfoOffset() const;
  inline int ReceiverInfoOffset() const;
  inline int FunctionNameInfoOffset() const;
  inline int InferredFunctionNameOffset() const;
  inline int PositionInfoOffset() const;
  inline int OuterScopeInfoOffset() const;
  inline int LocalsBlockListOffset() const;
  inline int ModuleInfoOffset() const;
  inline int ModuleVariableCountOffset() const;
  inline int ModuleVariablesOffset() const;
  static constexpr int kEndOfStrongFieldsOffset = kContextLocalNamesOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kContextLocalNamesOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kContextLocalNamesOffsetEnd + 1;

  // SizeFor implementations not generated due to complex array lengths

  inline int AllocatedSize();

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedScopeInfo() : P() {
    static_assert(std::is_base_of<TorqueGeneratedScopeInfo, 
      DAlias>::value,
      "class TorqueGeneratedScopeInfo should be used as direct base for ScopeInfo.");
  }
 protected:
  inline explicit TorqueGeneratedScopeInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedScopeInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

struct TorqueGeneratedPositionInfoOffsets {
  static constexpr int kStartOffset = 0;
  static constexpr int kEndOffset = 4;
  static constexpr int kSize = 8;
};

struct TorqueGeneratedFunctionNameInfoOffsets {
  static constexpr int kFunctionVariableNameOffset = 0;
  static constexpr int kFunctionVariableContextOrStackSlotIndexOffset = 4;
  static constexpr int kSize = 8;
};

struct TorqueGeneratedModuleVariableOffsets {
  static constexpr int kNameOffset = 0;
  static constexpr int kIndexOffset = 4;
  static constexpr int kPropertiesOffset = 8;
  static constexpr int kSize = 12;
};

