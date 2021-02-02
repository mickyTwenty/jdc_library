inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoContextLocalNames(ScopeInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoContextLocalInfos(ScopeInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoSavedClassVariableInfo(ScopeInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoReceiverInfo(ScopeInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoFunctionNameInfo(ScopeInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoInferredFunctionName(ScopeInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoPositionInfo(ScopeInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoOuterScopeInfo(ScopeInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoLocalsBlockList(ScopeInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoModuleInfo(ScopeInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoModuleVariableCount(ScopeInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoModuleVariables(ScopeInfo p_o);
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i);
inline intptr_t TqRuntimeConvert_intptr_Smi_0(Smi p_s);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_String_0(Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_SmiTagged_VariableProperties_0(Object p_object, intptr_t p_offset, intptr_t p_length);
inline int31_t TqRuntimeFromConstexpr_int31_constexpr_int31_0(int31_t p_i);
inline intptr_t TqRuntimeConvert_intptr_int31_0(int31_t p_i);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Smi_0(Object p_object, intptr_t p_offset, intptr_t p_length);
inline uint32_t TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_STACK_0(VariableAllocationInfo p_o);
inline bool TqRuntimeFromConstexpr_bool_constexpr_bool_0(bool p_b);
inline uint32_t TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_CONTEXT_0(VariableAllocationInfo p_o);
inline uint32_t TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_NONE_0(VariableAllocationInfo p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_FunctionNameInfo_0(Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Undefined_OR_String_0(Object p_object, intptr_t p_offset, intptr_t p_length);
inline uint32_t TqRuntimeFromConstexpr_uint32_constexpr_uint32_0(uint32_t p_i);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_PositionInfo_0(Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_TheHole_OR_ScopeInfo_0(Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_HashTable_0(Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_SourceTextModuleInfo_0(Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_Smi_0(Object p_object, intptr_t p_offset, intptr_t p_length);
inline intptr_t TqRuntimeConvert_intptr_constexpr_int31_0(int31_t p_i);
inline uintptr_t TqRuntimeConvert_uintptr_intptr_0(intptr_t p_i);
inline intptr_t TqRuntimeTimesSizeOf_Smi_0(intptr_t p_i);
inline std::tuple<Object, intptr_t> TqRuntimeNewReference_Smi_0(Object p_object, intptr_t p_offset);
inline Smi TqRuntimeFromConstexpr_Smi_constexpr_int31_0(int31_t p_i);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_ModuleVariable_0(Object p_object, intptr_t p_offset, intptr_t p_length);
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoContextLocalNames
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoContextLocalNames
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoContextLocalNames(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Smi tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  Object tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp2 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  tmp4 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp3));
  tmp5 = TqRuntimeConvert_intptr_Smi_0(tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(20);
  std::tie(tmp7, tmp8, tmp9) = TqRuntimeNewMutableSlice_String_0(p_o, tmp6, tmp5);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp7), std::make_tuple(tmp8), std::make_tuple(tmp9), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoContextLocalNames

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoContextLocalInfos
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoContextLocalInfos
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoContextLocalInfos(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Smi tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  Object tmp12{}; USE(tmp12);
  intptr_t tmp13{}; USE(tmp13);
  intptr_t tmp14{}; USE(tmp14);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceScopeInfoContextLocalNames(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp8 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp9 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  tmp10 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp9));
  tmp11 = TqRuntimeConvert_intptr_Smi_0(tmp10);
  std::tie(tmp12, tmp13, tmp14) = TqRuntimeNewMutableSlice_SmiTagged_VariableProperties_0(p_o, tmp5, tmp11);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp12), std::make_tuple(tmp13), std::make_tuple(tmp14), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoContextLocalInfos

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoSavedClassVariableInfo
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoSavedClassVariableInfo
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoSavedClassVariableInfo(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Smi tmp10{}; USE(tmp10);
  bool tmp11{}; USE(tmp11);
  int31_t tmp12{}; USE(tmp12);
  int31_t tmp13{}; USE(tmp13);
  int31_t phi_bb4_16{}; USE(phi_bb4_16);
  intptr_t tmp14{}; USE(tmp14);
  Object tmp15{}; USE(tmp15);
  intptr_t tmp16{}; USE(tmp16);
  intptr_t tmp17{}; USE(tmp17);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceScopeInfoContextLocalInfos(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp8 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp9 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  tmp10 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp11 = CastToUnderlyingTypeIfEnum(base::BitField<bool, 10, 1, uint32_t>::decode(tmp10.value()));
  if (tmp11) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  tmp12 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(1);
  phi_bb4_16 = tmp12;
  goto block4;

  block3:
  tmp13 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(0);
  phi_bb4_16 = tmp13;
  goto block4;

  block4:
  tmp14 = TqRuntimeConvert_intptr_int31_0(phi_bb4_16);
  std::tie(tmp15, tmp16, tmp17) = TqRuntimeNewMutableSlice_Smi_0(p_o, tmp5, tmp14);
  goto block6;

  block6:
  return std::tuple_cat(std::make_tuple(tmp15), std::make_tuple(tmp16), std::make_tuple(tmp17), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoSavedClassVariableInfo

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoReceiverInfo
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoReceiverInfo
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoReceiverInfo(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Smi tmp10{}; USE(tmp10);
  uint32_t tmp11{}; USE(tmp11);
  uint32_t tmp12{}; USE(tmp12);
  bool tmp13{}; USE(tmp13);
  bool tmp14{}; USE(tmp14);
  Smi tmp15{}; USE(tmp15);
  uint32_t tmp16{}; USE(tmp16);
  uint32_t tmp17{}; USE(tmp17);
  bool tmp18{}; USE(tmp18);
  bool phi_bb8_17{}; USE(phi_bb8_17);
  int31_t tmp19{}; USE(tmp19);
  int31_t tmp20{}; USE(tmp20);
  int31_t phi_bb4_16{}; USE(phi_bb4_16);
  intptr_t tmp21{}; USE(tmp21);
  Object tmp22{}; USE(tmp22);
  intptr_t tmp23{}; USE(tmp23);
  intptr_t tmp24{}; USE(tmp24);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceScopeInfoSavedClassVariableInfo(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp8 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp9 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  tmp10 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp11 = CastToUnderlyingTypeIfEnum(base::BitField<VariableAllocationInfo, 7, 2, uint32_t>::decode(tmp10.value()));
  tmp12 = TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_STACK_0(VariableAllocationInfo::STACK);
  tmp13 = TorqueRuntimeMacroShims::CodeStubAssembler::Word32Equal(tmp11, tmp12);
  if (tmp13) {
    goto block6;
  } else {
    goto block7;
  }

  block6:
  tmp14 = TqRuntimeFromConstexpr_bool_constexpr_bool_0(true);
  phi_bb8_17 = tmp14;
  goto block8;

  block7:
  tmp15 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp16 = CastToUnderlyingTypeIfEnum(base::BitField<VariableAllocationInfo, 7, 2, uint32_t>::decode(tmp15.value()));
  tmp17 = TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_CONTEXT_0(VariableAllocationInfo::CONTEXT);
  tmp18 = TorqueRuntimeMacroShims::CodeStubAssembler::Word32Equal(tmp16, tmp17);
  phi_bb8_17 = tmp18;
  goto block8;

  block8:
  if (phi_bb8_17) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  tmp19 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(1);
  phi_bb4_16 = tmp19;
  goto block4;

  block3:
  tmp20 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(0);
  phi_bb4_16 = tmp20;
  goto block4;

  block4:
  tmp21 = TqRuntimeConvert_intptr_int31_0(phi_bb4_16);
  std::tie(tmp22, tmp23, tmp24) = TqRuntimeNewMutableSlice_Smi_0(p_o, tmp5, tmp21);
  goto block9;

  block9:
  return std::tuple_cat(std::make_tuple(tmp22), std::make_tuple(tmp23), std::make_tuple(tmp24), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoReceiverInfo

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoFunctionNameInfo
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoFunctionNameInfo
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoFunctionNameInfo(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Smi tmp10{}; USE(tmp10);
  uint32_t tmp11{}; USE(tmp11);
  uint32_t tmp12{}; USE(tmp12);
  bool tmp13{}; USE(tmp13);
  int31_t tmp14{}; USE(tmp14);
  int31_t tmp15{}; USE(tmp15);
  int31_t phi_bb4_16{}; USE(phi_bb4_16);
  intptr_t tmp16{}; USE(tmp16);
  Object tmp17{}; USE(tmp17);
  intptr_t tmp18{}; USE(tmp18);
  intptr_t tmp19{}; USE(tmp19);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceScopeInfoReceiverInfo(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp8 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp9 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  tmp10 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp11 = CastToUnderlyingTypeIfEnum(base::BitField<VariableAllocationInfo, 12, 2, uint32_t>::decode(tmp10.value()));
  tmp12 = TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_NONE_0(VariableAllocationInfo::NONE);
  tmp13 = TorqueRuntimeMacroShims::CodeStubAssembler::Word32NotEqual(tmp11, tmp12);
  if (tmp13) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  tmp14 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(1);
  phi_bb4_16 = tmp14;
  goto block4;

  block3:
  tmp15 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(0);
  phi_bb4_16 = tmp15;
  goto block4;

  block4:
  tmp16 = TqRuntimeConvert_intptr_int31_0(phi_bb4_16);
  std::tie(tmp17, tmp18, tmp19) = TqRuntimeNewMutableSlice_FunctionNameInfo_0(p_o, tmp5, tmp16);
  goto block6;

  block6:
  return std::tuple_cat(std::make_tuple(tmp17), std::make_tuple(tmp18), std::make_tuple(tmp19), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoFunctionNameInfo

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoInferredFunctionName
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoInferredFunctionName
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoInferredFunctionName(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Smi tmp10{}; USE(tmp10);
  bool tmp11{}; USE(tmp11);
  int31_t tmp12{}; USE(tmp12);
  int31_t tmp13{}; USE(tmp13);
  int31_t phi_bb4_16{}; USE(phi_bb4_16);
  intptr_t tmp14{}; USE(tmp14);
  Object tmp15{}; USE(tmp15);
  intptr_t tmp16{}; USE(tmp16);
  intptr_t tmp17{}; USE(tmp17);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceScopeInfoFunctionNameInfo(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp8 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp9 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  tmp10 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp11 = CastToUnderlyingTypeIfEnum(base::BitField<bool, 14, 1, uint32_t>::decode(tmp10.value()));
  if (tmp11) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  tmp12 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(1);
  phi_bb4_16 = tmp12;
  goto block4;

  block3:
  tmp13 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(0);
  phi_bb4_16 = tmp13;
  goto block4;

  block4:
  tmp14 = TqRuntimeConvert_intptr_int31_0(phi_bb4_16);
  std::tie(tmp15, tmp16, tmp17) = TqRuntimeNewMutableSlice_Undefined_OR_String_0(p_o, tmp5, tmp14);
  goto block6;

  block6:
  return std::tuple_cat(std::make_tuple(tmp15), std::make_tuple(tmp16), std::make_tuple(tmp17), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoInferredFunctionName

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoPositionInfo
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoPositionInfo
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoPositionInfo(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Smi tmp10{}; USE(tmp10);
  uint32_t tmp11{}; USE(tmp11);
  uint32_t tmp12{}; USE(tmp12);
  bool tmp13{}; USE(tmp13);
  bool tmp14{}; USE(tmp14);
  Smi tmp15{}; USE(tmp15);
  uint32_t tmp16{}; USE(tmp16);
  uint32_t tmp17{}; USE(tmp17);
  bool tmp18{}; USE(tmp18);
  bool phi_bb8_17{}; USE(phi_bb8_17);
  bool tmp19{}; USE(tmp19);
  Smi tmp20{}; USE(tmp20);
  uint32_t tmp21{}; USE(tmp21);
  uint32_t tmp22{}; USE(tmp22);
  bool tmp23{}; USE(tmp23);
  bool phi_bb11_17{}; USE(phi_bb11_17);
  bool tmp24{}; USE(tmp24);
  Smi tmp25{}; USE(tmp25);
  uint32_t tmp26{}; USE(tmp26);
  uint32_t tmp27{}; USE(tmp27);
  bool tmp28{}; USE(tmp28);
  bool phi_bb14_17{}; USE(phi_bb14_17);
  int31_t tmp29{}; USE(tmp29);
  int31_t tmp30{}; USE(tmp30);
  int31_t phi_bb4_16{}; USE(phi_bb4_16);
  intptr_t tmp31{}; USE(tmp31);
  Object tmp32{}; USE(tmp32);
  intptr_t tmp33{}; USE(tmp33);
  intptr_t tmp34{}; USE(tmp34);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceScopeInfoInferredFunctionName(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp8 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp9 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  tmp10 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp11 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(tmp10.value()));
  tmp12 = TqRuntimeFromConstexpr_uint32_constexpr_uint32_0(ScopeType::FUNCTION_SCOPE);
  tmp13 = TorqueRuntimeMacroShims::CodeStubAssembler::Word32Equal(tmp11, tmp12);
  if (tmp13) {
    goto block6;
  } else {
    goto block7;
  }

  block6:
  tmp14 = TqRuntimeFromConstexpr_bool_constexpr_bool_0(true);
  phi_bb8_17 = tmp14;
  goto block8;

  block7:
  tmp15 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp16 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(tmp15.value()));
  tmp17 = TqRuntimeFromConstexpr_uint32_constexpr_uint32_0(ScopeType::SCRIPT_SCOPE);
  tmp18 = TorqueRuntimeMacroShims::CodeStubAssembler::Word32Equal(tmp16, tmp17);
  phi_bb8_17 = tmp18;
  goto block8;

  block8:
  if (phi_bb8_17) {
    goto block9;
  } else {
    goto block10;
  }

  block9:
  tmp19 = TqRuntimeFromConstexpr_bool_constexpr_bool_0(true);
  phi_bb11_17 = tmp19;
  goto block11;

  block10:
  tmp20 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp21 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(tmp20.value()));
  tmp22 = TqRuntimeFromConstexpr_uint32_constexpr_uint32_0(ScopeType::EVAL_SCOPE);
  tmp23 = TorqueRuntimeMacroShims::CodeStubAssembler::Word32Equal(tmp21, tmp22);
  phi_bb11_17 = tmp23;
  goto block11;

  block11:
  if (phi_bb11_17) {
    goto block12;
  } else {
    goto block13;
  }

  block12:
  tmp24 = TqRuntimeFromConstexpr_bool_constexpr_bool_0(true);
  phi_bb14_17 = tmp24;
  goto block14;

  block13:
  tmp25 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp26 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(tmp25.value()));
  tmp27 = TqRuntimeFromConstexpr_uint32_constexpr_uint32_0(ScopeType::MODULE_SCOPE);
  tmp28 = TorqueRuntimeMacroShims::CodeStubAssembler::Word32Equal(tmp26, tmp27);
  phi_bb14_17 = tmp28;
  goto block14;

  block14:
  if (phi_bb14_17) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  tmp29 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(1);
  phi_bb4_16 = tmp29;
  goto block4;

  block3:
  tmp30 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(0);
  phi_bb4_16 = tmp30;
  goto block4;

  block4:
  tmp31 = TqRuntimeConvert_intptr_int31_0(phi_bb4_16);
  std::tie(tmp32, tmp33, tmp34) = TqRuntimeNewMutableSlice_PositionInfo_0(p_o, tmp5, tmp31);
  goto block15;

  block15:
  return std::tuple_cat(std::make_tuple(tmp32), std::make_tuple(tmp33), std::make_tuple(tmp34), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoPositionInfo

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoOuterScopeInfo
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoOuterScopeInfo
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoOuterScopeInfo(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Smi tmp10{}; USE(tmp10);
  bool tmp11{}; USE(tmp11);
  int31_t tmp12{}; USE(tmp12);
  int31_t tmp13{}; USE(tmp13);
  int31_t phi_bb4_16{}; USE(phi_bb4_16);
  intptr_t tmp14{}; USE(tmp14);
  Object tmp15{}; USE(tmp15);
  intptr_t tmp16{}; USE(tmp16);
  intptr_t tmp17{}; USE(tmp17);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceScopeInfoPositionInfo(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp8 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp9 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  tmp10 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp11 = CastToUnderlyingTypeIfEnum(base::BitField<bool, 22, 1, uint32_t>::decode(tmp10.value()));
  if (tmp11) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  tmp12 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(1);
  phi_bb4_16 = tmp12;
  goto block4;

  block3:
  tmp13 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(0);
  phi_bb4_16 = tmp13;
  goto block4;

  block4:
  tmp14 = TqRuntimeConvert_intptr_int31_0(phi_bb4_16);
  std::tie(tmp15, tmp16, tmp17) = TqRuntimeNewMutableSlice_TheHole_OR_ScopeInfo_0(p_o, tmp5, tmp14);
  goto block6;

  block6:
  return std::tuple_cat(std::make_tuple(tmp15), std::make_tuple(tmp16), std::make_tuple(tmp17), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoOuterScopeInfo

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoLocalsBlockList
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoLocalsBlockList
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoLocalsBlockList(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Smi tmp10{}; USE(tmp10);
  bool tmp11{}; USE(tmp11);
  int31_t tmp12{}; USE(tmp12);
  int31_t tmp13{}; USE(tmp13);
  int31_t phi_bb4_16{}; USE(phi_bb4_16);
  intptr_t tmp14{}; USE(tmp14);
  Object tmp15{}; USE(tmp15);
  intptr_t tmp16{}; USE(tmp16);
  intptr_t tmp17{}; USE(tmp17);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceScopeInfoOuterScopeInfo(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp8 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp9 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  tmp10 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp11 = CastToUnderlyingTypeIfEnum(base::BitField<bool, 28, 1, uint32_t>::decode(tmp10.value()));
  if (tmp11) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  tmp12 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(1);
  phi_bb4_16 = tmp12;
  goto block4;

  block3:
  tmp13 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(0);
  phi_bb4_16 = tmp13;
  goto block4;

  block4:
  tmp14 = TqRuntimeConvert_intptr_int31_0(phi_bb4_16);
  std::tie(tmp15, tmp16, tmp17) = TqRuntimeNewMutableSlice_HashTable_0(p_o, tmp5, tmp14);
  goto block6;

  block6:
  return std::tuple_cat(std::make_tuple(tmp15), std::make_tuple(tmp16), std::make_tuple(tmp17), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoLocalsBlockList

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoModuleInfo
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoModuleInfo
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoModuleInfo(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Smi tmp10{}; USE(tmp10);
  uint32_t tmp11{}; USE(tmp11);
  uint32_t tmp12{}; USE(tmp12);
  bool tmp13{}; USE(tmp13);
  int31_t tmp14{}; USE(tmp14);
  int31_t tmp15{}; USE(tmp15);
  int31_t phi_bb4_16{}; USE(phi_bb4_16);
  intptr_t tmp16{}; USE(tmp16);
  Object tmp17{}; USE(tmp17);
  intptr_t tmp18{}; USE(tmp18);
  intptr_t tmp19{}; USE(tmp19);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceScopeInfoLocalsBlockList(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp8 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp9 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  tmp10 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp11 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(tmp10.value()));
  tmp12 = TqRuntimeFromConstexpr_uint32_constexpr_uint32_0(ScopeType::MODULE_SCOPE);
  tmp13 = TorqueRuntimeMacroShims::CodeStubAssembler::Word32Equal(tmp11, tmp12);
  if (tmp13) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  tmp14 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(1);
  phi_bb4_16 = tmp14;
  goto block4;

  block3:
  tmp15 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(0);
  phi_bb4_16 = tmp15;
  goto block4;

  block4:
  tmp16 = TqRuntimeConvert_intptr_int31_0(phi_bb4_16);
  std::tie(tmp17, tmp18, tmp19) = TqRuntimeNewMutableSlice_SourceTextModuleInfo_0(p_o, tmp5, tmp16);
  goto block6;

  block6:
  return std::tuple_cat(std::make_tuple(tmp17), std::make_tuple(tmp18), std::make_tuple(tmp19), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoModuleInfo

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoModuleVariableCount
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoModuleVariableCount
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoModuleVariableCount(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Smi tmp10{}; USE(tmp10);
  uint32_t tmp11{}; USE(tmp11);
  uint32_t tmp12{}; USE(tmp12);
  bool tmp13{}; USE(tmp13);
  int31_t tmp14{}; USE(tmp14);
  int31_t tmp15{}; USE(tmp15);
  int31_t phi_bb4_16{}; USE(phi_bb4_16);
  intptr_t tmp16{}; USE(tmp16);
  Object tmp17{}; USE(tmp17);
  intptr_t tmp18{}; USE(tmp18);
  intptr_t tmp19{}; USE(tmp19);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceScopeInfoModuleInfo(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp8 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp9 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  tmp10 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp11 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(tmp10.value()));
  tmp12 = TqRuntimeFromConstexpr_uint32_constexpr_uint32_0(ScopeType::MODULE_SCOPE);
  tmp13 = TorqueRuntimeMacroShims::CodeStubAssembler::Word32Equal(tmp11, tmp12);
  if (tmp13) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  tmp14 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(1);
  phi_bb4_16 = tmp14;
  goto block4;

  block3:
  tmp15 = TqRuntimeFromConstexpr_int31_constexpr_int31_0(0);
  phi_bb4_16 = tmp15;
  goto block4;

  block4:
  tmp16 = TqRuntimeConvert_intptr_int31_0(phi_bb4_16);
  std::tie(tmp17, tmp18, tmp19) = TqRuntimeNewConstSlice_Smi_0(p_o, tmp5, tmp16);
  goto block6;

  block6:
  return std::tuple_cat(std::make_tuple(tmp17), std::make_tuple(tmp18), std::make_tuple(tmp19), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoModuleVariableCount

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoModuleVariables
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoModuleVariables
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceScopeInfoModuleVariables(ScopeInfo p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Object tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  Smi tmp13{}; USE(tmp13);
  uint32_t tmp14{}; USE(tmp14);
  uint32_t tmp15{}; USE(tmp15);
  bool tmp16{}; USE(tmp16);
  intptr_t tmp17{}; USE(tmp17);
  uintptr_t tmp18{}; USE(tmp18);
  uintptr_t tmp19{}; USE(tmp19);
  bool tmp20{}; USE(tmp20);
  intptr_t tmp21{}; USE(tmp21);
  intptr_t tmp22{}; USE(tmp22);
  Object tmp23{}; USE(tmp23);
  intptr_t tmp24{}; USE(tmp24);
  Smi tmp25{}; USE(tmp25);
  Smi tmp26{}; USE(tmp26);
  Smi phi_bb4_19{}; USE(phi_bb4_19);
  intptr_t tmp27{}; USE(tmp27);
  Object tmp28{}; USE(tmp28);
  intptr_t tmp29{}; USE(tmp29);
  intptr_t tmp30{}; USE(tmp30);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceScopeInfoModuleVariableCount(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp8 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(8);
  tmp9 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(16);
  std::tie(tmp10, tmp11, tmp12) = TqRuntimeFieldSliceScopeInfoModuleVariableCount(p_o);
  tmp13 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp8));
  tmp14 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(tmp13.value()));
  tmp15 = TqRuntimeFromConstexpr_uint32_constexpr_uint32_0(ScopeType::MODULE_SCOPE);
  tmp16 = TorqueRuntimeMacroShims::CodeStubAssembler::Word32Equal(tmp14, tmp15);
  if (tmp16) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  tmp17 = TqRuntimeConvert_intptr_constexpr_int31_0(0);
  tmp18 = TqRuntimeConvert_uintptr_intptr_0(tmp17);
  tmp19 = TqRuntimeConvert_uintptr_intptr_0(tmp12);
  tmp20 = TorqueRuntimeMacroShims::CodeStubAssembler::UintPtrLessThan(tmp18, tmp19);
  if (tmp20) {
    goto block10;
  } else {
    goto block11;
  }

  block10:
  tmp21 = TqRuntimeTimesSizeOf_Smi_0(tmp17);
  tmp22 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp11, tmp21);
  std::tie(tmp23, tmp24) = TqRuntimeNewReference_Smi_0(tmp10, tmp22);
  tmp25 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&tmp23), static_cast<int>(tmp24));
  phi_bb4_19 = tmp25;
  goto block4;

  block11:
  UNREACHABLE();

  block3:
  tmp26 = TqRuntimeFromConstexpr_Smi_constexpr_int31_0(0);
  phi_bb4_19 = tmp26;
  goto block4;

  block4:
  tmp27 = TqRuntimeConvert_intptr_Smi_0(phi_bb4_19);
  std::tie(tmp28, tmp29, tmp30) = TqRuntimeNewMutableSlice_ModuleVariable_0(p_o, tmp5, tmp27);
  goto block13;

  block13:
  return std::tuple_cat(std::make_tuple(tmp28), std::make_tuple(tmp29), std::make_tuple(tmp30), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceScopeInfoModuleVariables

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0
inline intptr_t TqRuntimeConvert_intptr_Smi_0(Smi p_s) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::SmiUntag(p_s);
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_String_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_String_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_String_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_String_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_SmiTagged_VariableProperties_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_SmiTagged_VariableProperties_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_SmiTagged_VariableProperties_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_SmiTagged_VariableProperties_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_int31_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_int31_constexpr_int31_0
inline int31_t TqRuntimeFromConstexpr_int31_constexpr_int31_0(int31_t p_i) {
  DisallowGarbageCollection no_gc;
  int31_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_int31_constexpr_int31_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int31_0
inline intptr_t TqRuntimeConvert_intptr_int31_0(int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::ChangeInt32ToIntPtr(p_i);
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int31_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Smi_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_STACK_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_STACK_0
inline uint32_t TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_STACK_0(VariableAllocationInfo p_o) {
  DisallowGarbageCollection no_gc;
  uint32_t tmp0{}; USE(tmp0);
  uint32_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_o));
  tmp1 = (tmp0);
  goto block2;

  block2:
  return tmp1;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_STACK_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_bool_constexpr_bool_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_bool_constexpr_bool_0
inline bool TqRuntimeFromConstexpr_bool_constexpr_bool_0(bool p_b) {
  DisallowGarbageCollection no_gc;
  bool tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::BoolConstant(p_b);
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_bool_constexpr_bool_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_CONTEXT_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_CONTEXT_0
inline uint32_t TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_CONTEXT_0(VariableAllocationInfo p_o) {
  DisallowGarbageCollection no_gc;
  uint32_t tmp0{}; USE(tmp0);
  uint32_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_o));
  tmp1 = (tmp0);
  goto block2;

  block2:
  return tmp1;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_CONTEXT_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_NONE_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_NONE_0
inline uint32_t TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_NONE_0(VariableAllocationInfo p_o) {
  DisallowGarbageCollection no_gc;
  uint32_t tmp0{}; USE(tmp0);
  uint32_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_o));
  tmp1 = (tmp0);
  goto block2;

  block2:
  return tmp1;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_VariableAllocationInfo_constexpr_NONE_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_FunctionNameInfo_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_FunctionNameInfo_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_FunctionNameInfo_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_FunctionNameInfo_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Undefined_OR_String_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Undefined_OR_String_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Undefined_OR_String_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Undefined_OR_String_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_uint32_constexpr_uint32_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_uint32_constexpr_uint32_0
inline uint32_t TqRuntimeFromConstexpr_uint32_constexpr_uint32_0(uint32_t p_i) {
  DisallowGarbageCollection no_gc;
  int32_t tmp0{}; USE(tmp0);
  uint32_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  tmp1 = TorqueRuntimeMacroShims::CodeStubAssembler::Unsigned(tmp0);
  goto block2;

  block2:
  return tmp1;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_uint32_constexpr_uint32_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_PositionInfo_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_PositionInfo_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_PositionInfo_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_PositionInfo_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_TheHole_OR_ScopeInfo_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_TheHole_OR_ScopeInfo_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_TheHole_OR_ScopeInfo_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_TheHole_OR_ScopeInfo_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_HashTable_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_HashTable_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_HashTable_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_HashTable_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_SourceTextModuleInfo_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_SourceTextModuleInfo_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_SourceTextModuleInfo_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_SourceTextModuleInfo_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_Smi_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_Smi_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_Smi_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_Smi_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_constexpr_int31_0
inline intptr_t TqRuntimeConvert_intptr_constexpr_int31_0(int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(p_i);
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_constexpr_int31_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_uintptr_intptr_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_uintptr_intptr_0
inline uintptr_t TqRuntimeConvert_uintptr_intptr_0(intptr_t p_i) {
  DisallowGarbageCollection no_gc;
  uintptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::Unsigned(p_i);
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeConvert_uintptr_intptr_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeTimesSizeOf_Smi_0
#define V8_INTERNAL_DEFINED_TqRuntimeTimesSizeOf_Smi_0
inline intptr_t TqRuntimeTimesSizeOf_Smi_0(intptr_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(kTaggedSize);
  tmp1 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(p_i, tmp0);
  goto block2;

  block2:
  return tmp1;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeTimesSizeOf_Smi_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewReference_Smi_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewReference_Smi_0
inline std::tuple<Object, intptr_t> TqRuntimeNewReference_Smi_0(Object p_object, intptr_t p_offset) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  std::tie(tmp0, tmp1) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewReference_Smi_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_Smi_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_Smi_constexpr_int31_0
inline Smi TqRuntimeFromConstexpr_Smi_constexpr_int31_0(int31_t p_i) {
  DisallowGarbageCollection no_gc;
  Smi tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = Smi::FromInt(CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_Smi_constexpr_int31_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_ModuleVariable_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_ModuleVariable_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_ModuleVariable_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_ModuleVariable_0

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::parameter_count() const {
  return TaggedField<Smi, kParameterCountOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_parameter_count(int value) {
  WRITE_FIELD(*this, kParameterCountOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::context_local_count() const {
  return TaggedField<Smi, kContextLocalCountOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_context_local_count(int value) {
  WRITE_FIELD(*this, kContextLocalCountOffset, Smi::FromInt(value));
}

template <class D, class P>
String TorqueGeneratedScopeInfo<D, P>::context_local_names(int i) const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScopeInfo::context_local_names(isolate, i);
}
template <class D, class P>
String TorqueGeneratedScopeInfo<D, P>::context_local_names(IsolateRoot isolate, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->context_local_count());
  int offset = kContextLocalNamesOffset + i * kTaggedSize;
  auto value = TaggedField<String>::Relaxed_Load(isolate, *this, offset);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_context_local_names(int i, String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->context_local_count());
  int offset = kContextLocalNamesOffset + i * kTaggedSize;
  WRITE_FIELD(*this, offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, offset, value, mode);
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::context_local_infos(int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->context_local_count());
  int offset = ContextLocalInfosOffset() + i * kTaggedSize;
  return TaggedField<Smi>::load(*this, offset).value();
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_context_local_infos(int i, int value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->context_local_count());
  int offset = ContextLocalInfosOffset() + i * kTaggedSize;
  WRITE_FIELD(*this, offset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::saved_class_variable_info(int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoSavedClassVariableInfo(*static_cast<const D*>(this)))));
  int offset = SavedClassVariableInfoOffset() + i * kTaggedSize;
  return TaggedField<Smi>::load(*this, offset).value();
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_saved_class_variable_info(int i, int value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoSavedClassVariableInfo(*static_cast<const D*>(this)))));
  int offset = SavedClassVariableInfoOffset() + i * kTaggedSize;
  WRITE_FIELD(*this, offset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::receiver_info(int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoReceiverInfo(*static_cast<const D*>(this)))));
  int offset = ReceiverInfoOffset() + i * kTaggedSize;
  return TaggedField<Smi>::load(*this, offset).value();
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_receiver_info(int i, int value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoReceiverInfo(*static_cast<const D*>(this)))));
  int offset = ReceiverInfoOffset() + i * kTaggedSize;
  WRITE_FIELD(*this, offset, Smi::FromInt(value));
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedScopeInfo<D, P>::inferred_function_name(int i) const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScopeInfo::inferred_function_name(isolate, i);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedScopeInfo<D, P>::inferred_function_name(IsolateRoot isolate, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoInferredFunctionName(*static_cast<const D*>(this)))));
  int offset = InferredFunctionNameOffset() + i * kTaggedSize;
  auto value = TaggedField<PrimitiveHeapObject>::Relaxed_Load(isolate, *this, offset);
  DCHECK(value.IsUndefined() || value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_inferred_function_name(int i, PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsString());
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoInferredFunctionName(*static_cast<const D*>(this)))));
  int offset = InferredFunctionNameOffset() + i * kTaggedSize;
  WRITE_FIELD(*this, offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, offset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedScopeInfo<D, P>::outer_scope_info(int i) const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScopeInfo::outer_scope_info(isolate, i);
}
template <class D, class P>
HeapObject TorqueGeneratedScopeInfo<D, P>::outer_scope_info(IsolateRoot isolate, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoOuterScopeInfo(*static_cast<const D*>(this)))));
  int offset = OuterScopeInfoOffset() + i * kTaggedSize;
  auto value = TaggedField<HeapObject>::Relaxed_Load(isolate, *this, offset);
  DCHECK(value.IsTheHole() || value.IsScopeInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_outer_scope_info(int i, HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsTheHole() || value.IsScopeInfo());
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoOuterScopeInfo(*static_cast<const D*>(this)))));
  int offset = OuterScopeInfoOffset() + i * kTaggedSize;
  WRITE_FIELD(*this, offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, offset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedScopeInfo<D, P>::locals_block_list(int i) const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScopeInfo::locals_block_list(isolate, i);
}
template <class D, class P>
FixedArray TorqueGeneratedScopeInfo<D, P>::locals_block_list(IsolateRoot isolate, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoLocalsBlockList(*static_cast<const D*>(this)))));
  int offset = LocalsBlockListOffset() + i * kTaggedSize;
  auto value = TaggedField<FixedArray>::Relaxed_Load(isolate, *this, offset);
  DCHECK(value.IsHashTable());
  return value;
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_locals_block_list(int i, FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHashTable());
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoLocalsBlockList(*static_cast<const D*>(this)))));
  int offset = LocalsBlockListOffset() + i * kTaggedSize;
  WRITE_FIELD(*this, offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, offset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedScopeInfo<D, P>::module_info(int i) const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScopeInfo::module_info(isolate, i);
}
template <class D, class P>
FixedArray TorqueGeneratedScopeInfo<D, P>::module_info(IsolateRoot isolate, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoModuleInfo(*static_cast<const D*>(this)))));
  int offset = ModuleInfoOffset() + i * kTaggedSize;
  auto value = TaggedField<FixedArray>::Relaxed_Load(isolate, *this, offset);
  DCHECK(value.IsSourceTextModuleInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_module_info(int i, FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSourceTextModuleInfo());
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoModuleInfo(*static_cast<const D*>(this)))));
  int offset = ModuleInfoOffset() + i * kTaggedSize;
  WRITE_FIELD(*this, offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, offset, value, mode);
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::module_variable_count(int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoModuleVariableCount(*static_cast<const D*>(this)))));
  int offset = ModuleVariableCountOffset() + i * kTaggedSize;
  return TaggedField<Smi>::load(*this, offset).value();
}
template <class D, class P>
void TorqueGeneratedScopeInfo<D, P>::set_module_variable_count(int i, int value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSliceScopeInfoModuleVariableCount(*static_cast<const D*>(this)))));
  int offset = ModuleVariableCountOffset() + i * kTaggedSize;
  WRITE_FIELD(*this, offset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::ContextLocalInfosOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceScopeInfoContextLocalInfos(*static_cast<const D*>(this))));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::SavedClassVariableInfoOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceScopeInfoSavedClassVariableInfo(*static_cast<const D*>(this))));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::ReceiverInfoOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceScopeInfoReceiverInfo(*static_cast<const D*>(this))));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::FunctionNameInfoOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceScopeInfoFunctionNameInfo(*static_cast<const D*>(this))));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::InferredFunctionNameOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceScopeInfoInferredFunctionName(*static_cast<const D*>(this))));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::PositionInfoOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceScopeInfoPositionInfo(*static_cast<const D*>(this))));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::OuterScopeInfoOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceScopeInfoOuterScopeInfo(*static_cast<const D*>(this))));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::LocalsBlockListOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceScopeInfoLocalsBlockList(*static_cast<const D*>(this))));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::ModuleInfoOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceScopeInfoModuleInfo(*static_cast<const D*>(this))));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::ModuleVariableCountOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceScopeInfoModuleVariableCount(*static_cast<const D*>(this))));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::ModuleVariablesOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceScopeInfoModuleVariables(*static_cast<const D*>(this))));
}

template <class D, class P>
int TorqueGeneratedScopeInfo<D, P>::AllocatedSize() {
  auto slice = TqRuntimeFieldSliceScopeInfoModuleVariables(*static_cast<const D*>(this));
  return static_cast<int>(std::get<1>(slice)) + 12 * static_cast<int>(std::get<2>(slice));
}

template<class D, class P>
inline TorqueGeneratedScopeInfo<D, P>::TorqueGeneratedScopeInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsScopeInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedScopeInfo<D, P>::TorqueGeneratedScopeInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsScopeInfo_NonInline(*this));
}
