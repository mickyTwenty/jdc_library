template <class D, class P>
Object TorqueGeneratedJSPromise<D, P>::reactions_or_result() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSPromise::reactions_or_result(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSPromise<D, P>::reactions_or_result(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kReactionsOrResultOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsPromiseReaction());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSPromise<D, P>::set_reactions_or_result(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsPromiseReaction());
  WRITE_FIELD(*this, kReactionsOrResultOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReactionsOrResultOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSPromise<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSPromise<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSPromise<D, P>::TorqueGeneratedJSPromise(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSPromise_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSPromise<D, P>::TorqueGeneratedJSPromise(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSPromise_NonInline(*this));
}
