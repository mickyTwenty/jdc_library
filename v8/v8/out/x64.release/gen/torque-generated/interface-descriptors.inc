class ArrayEveryLoopContinuationDescriptor : public TorqueInterfaceDescriptor<1, 8, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ArrayEveryLoopContinuationDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 8> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ArrayFilterLoopContinuationDescriptor : public TorqueInterfaceDescriptor<1, 8, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ArrayFilterLoopContinuationDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 8> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ArrayFindLoopContinuationDescriptor : public TorqueInterfaceDescriptor<1, 6, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ArrayFindLoopContinuationDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 6> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ArrayFindIndexLoopContinuationDescriptor : public TorqueInterfaceDescriptor<1, 6, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ArrayFindIndexLoopContinuationDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 6> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ArrayForEachLoopContinuationDescriptor : public TorqueInterfaceDescriptor<1, 8, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ArrayForEachLoopContinuationDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 8> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class LoadJoinElement_DictionaryElements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinElement_DictionaryElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinElement_FastSmiOrObjectElements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinElement_FastSmiOrObjectElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinElement_FastDoubleElements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinElement_FastDoubleElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class ConvertToLocaleStringDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ConvertToLocaleStringDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class JoinStackPushDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(JoinStackPushDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class JoinStackPopDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(JoinStackPopDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class ArrayMapLoopContinuationDescriptor : public TorqueInterfaceDescriptor<1, 7, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ArrayMapLoopContinuationDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 7> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ArrayReduceRightLoopContinuationDescriptor : public TorqueInterfaceDescriptor<1, 6, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ArrayReduceRightLoopContinuationDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 6> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ArrayReduceLoopContinuationDescriptor : public TorqueInterfaceDescriptor<1, 6, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ArrayReduceLoopContinuationDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 6> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ArraySomeLoopContinuationDescriptor : public TorqueInterfaceDescriptor<1, 8, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ArraySomeLoopContinuationDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 8> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ToIntegerDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ToIntegerDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class FastCreateDataPropertyDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(FastCreateDataPropertyDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class CheckNumberInRangeDescriptor : public TorqueInterfaceDescriptor<1, 4, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CheckNumberInRangeDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 4> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedSigned()};
  }
};

class CheckSameObjectDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CheckSameObjectDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class BigIntAddNoThrowDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(BigIntAddNoThrowDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class BigIntAddDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(BigIntAddDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class BigIntSubtractNoThrowDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(BigIntSubtractNoThrowDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class BigIntSubtractDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(BigIntSubtractDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class BigIntUnaryMinusDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(BigIntUnaryMinusDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class ToStringDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ToStringDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class StringToListDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StringToListDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class StringAddConvertLeftDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StringAddConvertLeftDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::TaggedPointer()};
  }
};

class StringAddConvertRightDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StringAddConvertRightDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class StringCharAtDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StringCharAtDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class FastNewFunctionContextEvalDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(FastNewFunctionContextEvalDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value};
  }
};

class FastNewFunctionContextFunctionDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(FastNewFunctionContextFunctionDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value};
  }
};

class CreateRegExpLiteralDescriptor : public TorqueInterfaceDescriptor<1, 4, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CreateRegExpLiteralDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 4> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedSigned()};
  }
};

class CreateShallowArrayLiteralDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CreateShallowArrayLiteralDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer()};
  }
};

class CreateEmptyArrayLiteralDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CreateEmptyArrayLiteralDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class CreateShallowObjectLiteralDescriptor : public TorqueInterfaceDescriptor<1, 4, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CreateShallowObjectLiteralDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 4> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class CreateEmptyLiteralObjectDescriptor : public TorqueInterfaceDescriptor<1, 0, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CreateEmptyLiteralObjectDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class StringToNumberDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StringToNumberDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class NonNumberToNumberDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(NonNumberToNumberDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class NonNumberToNumericDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(NonNumberToNumericDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class ToNumericDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ToNumericDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class NumberToStringDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(NumberToStringDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class ToBooleanDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ToBooleanDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class ToLengthDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ToLengthDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class ToNameDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ToNameDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class ToObjectDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ToObjectDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class NonPrimitiveToPrimitive_DefaultDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(NonPrimitiveToPrimitive_DefaultDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class NonPrimitiveToPrimitive_NumberDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(NonPrimitiveToPrimitive_NumberDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class NonPrimitiveToPrimitive_StringDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(NonPrimitiveToPrimitive_StringDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class OrdinaryToPrimitive_NumberDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(OrdinaryToPrimitive_NumberDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class OrdinaryToPrimitive_StringDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(OrdinaryToPrimitive_StringDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class IncBlockCounterDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(IncBlockCounterDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class GetTemplateObjectDescriptor : public TorqueInterfaceDescriptor<1, 4, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(GetTemplateObjectDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 4> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::TaggedPointer()};
  }
};

class BytecodeBudgetInterruptFromCodeDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(BytecodeBudgetInterruptFromCodeDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class ForInPrepareDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ForInPrepareDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::TaggedPointer()};
  }
};

class ForInNextDescriptor : public TorqueInterfaceDescriptor<1, 6, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ForInNextDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 6> ParameterTypes() override {
    return {MachineTypeOf<UintPtrT>::value, MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedSigned(), MachineType::TaggedPointer()};
  }
};

class GetIteratorWithFeedbackDescriptor : public TorqueInterfaceDescriptor<1, 4, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(GetIteratorWithFeedbackDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 4> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer()};
  }
};

class CallIteratorWithFeedbackDescriptor : public TorqueInterfaceDescriptor<1, 4, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CallIteratorWithFeedbackDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 4> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedSigned(), MachineType::TaggedPointer()};
  }
};

class ParseIntDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ParseIntDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class AddDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(AddDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class SubtractDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(SubtractDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class MultiplyDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(MultiplyDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class DivideDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(DivideDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ModulusDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ModulusDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ExponentiateDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ExponentiateDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class NegateDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(NegateDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class BitwiseNotDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(BitwiseNotDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class DecrementDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(DecrementDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class IncrementDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(IncrementDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class ShiftLeftDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ShiftLeftDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ShiftRightDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ShiftRightDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ShiftRightLogicalDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ShiftRightLogicalDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class BitwiseAndDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(BitwiseAndDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class BitwiseOrDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(BitwiseOrDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class BitwiseXorDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(BitwiseXorDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class LessThanDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LessThanDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class LessThanOrEqualDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LessThanOrEqualDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class GreaterThanDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(GreaterThanDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class GreaterThanOrEqualDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(GreaterThanOrEqualDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class EqualDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(EqualDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class StrictEqualDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StrictEqualDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class CreateObjectWithoutPropertiesDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CreateObjectWithoutPropertiesDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class FulfillPromiseDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(FulfillPromiseDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class RejectPromiseDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(RejectPromiseDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer()};
  }
};

class NewPromiseCapabilityDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(NewPromiseCapabilityDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::TaggedPointer()};
  }
};

class PerformPromiseThenDescriptor : public TorqueInterfaceDescriptor<1, 4, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(PerformPromiseThenDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 4> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class PromiseFulfillReactionJobDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(PromiseFulfillReactionJobDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class PromiseRejectReactionJobDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(PromiseRejectReactionJobDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class PromiseResolveDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(PromiseResolveDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class ResolvePromiseDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ResolvePromiseDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class PromiseResolveThenableJobDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(PromiseResolveThenableJobDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class ProxyDeletePropertyDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ProxyDeletePropertyDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class ProxyGetPropertyDescriptor : public TorqueInterfaceDescriptor<1, 4, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ProxyGetPropertyDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 4> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedSigned()};
  }
};

class ProxyGetPrototypeOfDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ProxyGetPrototypeOfDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class ProxyHasPropertyDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ProxyHasPropertyDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class ProxyIsExtensibleDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ProxyIsExtensibleDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class ProxyPreventExtensionsDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ProxyPreventExtensionsDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class ProxySetPropertyDescriptor : public TorqueInterfaceDescriptor<1, 4, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ProxySetPropertyDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 4> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class ProxySetPrototypeOfDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ProxySetPrototypeOfDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class RegExpPrototypeExecSlowDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(RegExpPrototypeExecSlowDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class RegExpMatchFastDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(RegExpMatchFastDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class RegExpReplaceDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(RegExpReplaceDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class RegExpSearchFastDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(RegExpSearchFastDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class RegExpSplitDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(RegExpSplitDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class RegExpPrototypeTestFastDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(RegExpPrototypeTestFastDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class CreateHTMLDescriptor : public TorqueInterfaceDescriptor<1, 5, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CreateHTMLDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 5> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class StringRepeatDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StringRepeatDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class CreateTypedArrayDescriptor : public TorqueInterfaceDescriptor<1, 5, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CreateTypedArrayDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 5> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class TypedArrayMergeSortDescriptor : public TorqueInterfaceDescriptor<1, 6, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(TypedArrayMergeSortDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 6> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineTypeOf<UintPtrT>::value, MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer()};
  }
};

class WasmInt32ToHeapNumberDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmInt32ToHeapNumberDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineTypeOf<Int32T>::value};
  }
};

class WasmTaggedNonSmiToInt32Descriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmTaggedNonSmiToInt32Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineTypeOf<Int32T>::value}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class WasmTaggedToFloat64Descriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmTaggedToFloat64Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineTypeOf<Float64T>::value}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class WasmMemoryGrowDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmMemoryGrowDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineTypeOf<Int32T>::value}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineTypeOf<Int32T>::value};
  }
};

class WasmTableInitDescriptor : public TorqueInterfaceDescriptor<1, 5, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmTableInitDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 5> ParameterTypes() override {
    return {MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedSigned(), MachineType::TaggedSigned()};
  }
};

class WasmTableCopyDescriptor : public TorqueInterfaceDescriptor<1, 5, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmTableCopyDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 5> ParameterTypes() override {
    return {MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedSigned(), MachineType::TaggedSigned()};
  }
};

class WasmTableGetDescriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmTableGetDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineTypeOf<IntPtrT>::value, MachineTypeOf<Int32T>::value};
  }
};

class WasmTableSetDescriptor : public TorqueInterfaceDescriptor<1, 3, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmTableSetDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineTypeOf<IntPtrT>::value, MachineTypeOf<Int32T>::value, MachineType::AnyTagged()};
  }
};

class WasmRefFuncDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmRefFuncDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineTypeOf<Uint32T>::value};
  }
};

class WasmThrowDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmThrowDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class WasmRethrowDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmRethrowDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class WasmTriggerTierUpDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmTriggerTierUpDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class WasmStackGuardDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmStackGuardDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class WasmStackOverflowDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmStackOverflowDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class WasmTraceMemoryDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmTraceMemoryDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedSigned()};
  }
};

class WasmTraceEnterDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmTraceEnterDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class WasmTraceExitDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmTraceExitDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedSigned()};
  }
};

class WasmAllocateJSArrayDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmAllocateJSArrayDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedSigned()};
  }
};

class WasmAllocatePairDescriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmAllocatePairDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class WasmAllocateRttDescriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmAllocateRttDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineTypeOf<IntPtrT>::value, MachineType::TaggedPointer()};
  }
};

class WasmAllocateStructWithRttDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmAllocateStructWithRttDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class WasmAllocateArrayWithRttDescriptor : public TorqueInterfaceDescriptor<1, 3, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmAllocateArrayWithRttDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value};
  }
};

class WasmAllocateObjectWrapperDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmAllocateObjectWrapperDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class WasmInt32ToNumberDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmInt32ToNumberDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineTypeOf<Int32T>::value};
  }
};

class WasmUint32ToNumberDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmUint32ToNumberDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineTypeOf<Uint32T>::value};
  }
};

class UintPtr53ToNumberDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(UintPtr53ToNumberDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineTypeOf<UintPtrT>::value};
  }
};

class WasmAtomicNotifyDescriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmAtomicNotifyDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineTypeOf<Uint32T>::value}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineTypeOf<UintPtrT>::value, MachineTypeOf<Uint32T>::value};
  }
};

class WasmI32AtomicWait64Descriptor : public TorqueInterfaceDescriptor<1, 3, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmI32AtomicWait64Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineTypeOf<Uint32T>::value}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineTypeOf<UintPtrT>::value, MachineTypeOf<Int32T>::value, MachineTypeOf<IntPtrT>::value};
  }
};

class WasmI64AtomicWait64Descriptor : public TorqueInterfaceDescriptor<1, 3, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmI64AtomicWait64Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineTypeOf<Uint32T>::value}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineTypeOf<UintPtrT>::value, MachineTypeOf<IntPtrT>::value, MachineTypeOf<IntPtrT>::value};
  }
};

class WasmGetOwnPropertyDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmGetOwnPropertyDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::TaggedPointer()};
  }
};

class WasmTrapDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(WasmTrapDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedSigned()};
  }
};

class ThrowWasmTrapUnreachableDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapUnreachableDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapMemOutOfBoundsDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapMemOutOfBoundsDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapUnalignedAccessDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapUnalignedAccessDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapDivByZeroDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapDivByZeroDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapDivUnrepresentableDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapDivUnrepresentableDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapRemByZeroDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapRemByZeroDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapFloatUnrepresentableDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapFloatUnrepresentableDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapFuncSigMismatchDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapFuncSigMismatchDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapDataSegmentDroppedDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapDataSegmentDroppedDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapElemSegmentDroppedDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapElemSegmentDroppedDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapTableOutOfBoundsDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapTableOutOfBoundsDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapRethrowNullDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapRethrowNullDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapNullDereferenceDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapNullDereferenceDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapIllegalCastDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapIllegalCastDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class ThrowWasmTrapArrayOutOfBoundsDescriptor : public TorqueInterfaceDescriptor<1, 0, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(ThrowWasmTrapArrayOutOfBoundsDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 0> ParameterTypes() override {
    return {};
  }
};

class NewSloppyArgumentsElementsDescriptor : public TorqueInterfaceDescriptor<1, 3, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(NewSloppyArgumentsElementsDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineTypeOf<RawPtrT>::value, MachineTypeOf<IntPtrT>::value, MachineType::TaggedSigned()};
  }
};

class NewStrictArgumentsElementsDescriptor : public TorqueInterfaceDescriptor<1, 3, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(NewStrictArgumentsElementsDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineTypeOf<RawPtrT>::value, MachineTypeOf<IntPtrT>::value, MachineType::TaggedSigned()};
  }
};

class NewRestArgumentsElementsDescriptor : public TorqueInterfaceDescriptor<1, 3, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(NewRestArgumentsElementsDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineTypeOf<RawPtrT>::value, MachineTypeOf<IntPtrT>::value, MachineType::TaggedSigned()};
  }
};

class StringSlowFlattenDescriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(StringSlowFlattenDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class GenericBuiltinTest_JSAny_0Descriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(GenericBuiltinTest_JSAny_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::AnyTagged()};
  }
};

class TestHelperPlus1Descriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(TestHelperPlus1Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedSigned()};
  }
};

class TestHelperPlus2Descriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(TestHelperPlus2Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedSigned()};
  }
};

class NewSmiBoxDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(NewSmiBoxDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedSigned()};
  }
};

class ReturnTwoValuesDescriptor : public TorqueInterfaceDescriptor<2, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ReturnTwoValuesDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned(), MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedSigned(), MachineType::TaggedPointer()};
  }
};

class Load_FastSmiElements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Load_FastSmiElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class Load_FastObjectElements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Load_FastObjectElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class Load_FastDoubleElements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Load_FastDoubleElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class Store_FastSmiElements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Store_FastSmiElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::AnyTagged()};
  }
};

class Store_FastObjectElements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Store_FastObjectElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::AnyTagged()};
  }
};

class Store_FastDoubleElements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Store_FastDoubleElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::AnyTagged()};
  }
};

class Delete_FastSmiElements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Delete_FastSmiElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class Delete_FastObjectElements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Delete_FastObjectElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class Delete_FastDoubleElements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Delete_FastDoubleElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class SortCompareDefaultDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(SortCompareDefaultDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class SortCompareUserFnDescriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(SortCompareUserFnDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged()};
  }
};

class CanUseSameAccessor_GenericElementsAccessor_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CanUseSameAccessor_GenericElementsAccessor_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class CopyDescriptor : public TorqueInterfaceDescriptor<1, 5, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CopyDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 5> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::TaggedSigned()};
  }
};

class MergeAtDescriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(MergeAtDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class GallopLeftDescriptor : public TorqueInterfaceDescriptor<1, 6, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(GallopLeftDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 6> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedSigned(), MachineType::TaggedSigned(), MachineType::TaggedSigned()};
  }
};

class GallopRightDescriptor : public TorqueInterfaceDescriptor<1, 6, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(GallopRightDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 6> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedSigned(), MachineType::TaggedSigned(), MachineType::TaggedSigned()};
  }
};

class ArrayTimSortDescriptor : public TorqueInterfaceDescriptor<1, 1, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(ArrayTimSortDescriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedPointer()};
  }
};

class LoadJoinElement_GenericElementsAccessor_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinElement_GenericElementsAccessor_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinTypedElement_Int32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinTypedElement_Int32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinTypedElement_Float32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinTypedElement_Float32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinTypedElement_Float64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinTypedElement_Float64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinTypedElement_Uint8ClampedElements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinTypedElement_Uint8ClampedElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinTypedElement_BigUint64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinTypedElement_BigUint64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinTypedElement_BigInt64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinTypedElement_BigInt64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinTypedElement_Uint8Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinTypedElement_Uint8Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinTypedElement_Int8Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinTypedElement_Int8Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinTypedElement_Uint16Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinTypedElement_Uint16Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinTypedElement_Int16Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinTypedElement_Int16Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class LoadJoinTypedElement_Uint32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadJoinTypedElement_Uint32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class GenericBuiltinTest_Smi_0Descriptor : public TorqueInterfaceDescriptor<1, 1, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(GenericBuiltinTest_Smi_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 1> ParameterTypes() override {
    return {MachineType::TaggedSigned()};
  }
};

class CanUseSameAccessor_FastDoubleElements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CanUseSameAccessor_FastDoubleElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class CanUseSameAccessor_FastSmiElements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CanUseSameAccessor_FastSmiElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class CanUseSameAccessor_FastObjectElements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(CanUseSameAccessor_FastObjectElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedPointer()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged()};
  }
};

class Load_GenericElementsAccessor_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Load_GenericElementsAccessor_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class Store_GenericElementsAccessor_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Store_GenericElementsAccessor_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::AnyTagged()};
  }
};

class Delete_GenericElementsAccessor_0Descriptor : public TorqueInterfaceDescriptor<1, 2, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(Delete_GenericElementsAccessor_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineType::TaggedSigned()};
  }
};

class LoadTypedElement_Int32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadTypedElement_Int32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class StoreTypedElementNumeric_Int32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementNumeric_Int32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class StoreTypedElementJSAny_Int32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementJSAny_Int32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class LoadTypedElement_Float32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadTypedElement_Float32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class StoreTypedElementNumeric_Float32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementNumeric_Float32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class StoreTypedElementJSAny_Float32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementJSAny_Float32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class LoadTypedElement_Float64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadTypedElement_Float64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class StoreTypedElementNumeric_Float64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementNumeric_Float64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class StoreTypedElementJSAny_Float64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementJSAny_Float64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class LoadTypedElement_Uint8ClampedElements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadTypedElement_Uint8ClampedElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class StoreTypedElementNumeric_Uint8ClampedElements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementNumeric_Uint8ClampedElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class StoreTypedElementJSAny_Uint8ClampedElements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementJSAny_Uint8ClampedElements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class LoadTypedElement_BigUint64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadTypedElement_BigUint64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class StoreTypedElementNumeric_BigUint64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementNumeric_BigUint64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class StoreTypedElementJSAny_BigUint64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementJSAny_BigUint64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class LoadTypedElement_BigInt64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadTypedElement_BigInt64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class StoreTypedElementNumeric_BigInt64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementNumeric_BigInt64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class StoreTypedElementJSAny_BigInt64Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementJSAny_BigInt64Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class LoadTypedElement_Uint8Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadTypedElement_Uint8Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class StoreTypedElementNumeric_Uint8Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementNumeric_Uint8Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class StoreTypedElementJSAny_Uint8Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementJSAny_Uint8Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class LoadTypedElement_Int8Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadTypedElement_Int8Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class StoreTypedElementNumeric_Int8Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementNumeric_Int8Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class StoreTypedElementJSAny_Int8Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementJSAny_Int8Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class LoadTypedElement_Uint16Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadTypedElement_Uint16Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class StoreTypedElementNumeric_Uint16Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementNumeric_Uint16Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class StoreTypedElementJSAny_Uint16Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementJSAny_Uint16Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class LoadTypedElement_Int16Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadTypedElement_Int16Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class StoreTypedElementNumeric_Int16Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementNumeric_Int16Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class StoreTypedElementJSAny_Int16Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementJSAny_Int16Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class LoadTypedElement_Uint32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 2, false> {
  DECLARE_DESCRIPTOR_WITH_BASE(LoadTypedElement_Uint32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::AnyTagged()}};
  }
  std::array<MachineType, 2> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value};
  }
};

class StoreTypedElementNumeric_Uint32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementNumeric_Uint32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

class StoreTypedElementJSAny_Uint32Elements_0Descriptor : public TorqueInterfaceDescriptor<1, 3, true> {
  DECLARE_DESCRIPTOR_WITH_BASE(StoreTypedElementJSAny_Uint32Elements_0Descriptor, TorqueInterfaceDescriptor)
  std::vector<MachineType> ReturnType() override {
    return {{MachineType::TaggedSigned()}};
  }
  std::array<MachineType, 3> ParameterTypes() override {
    return {MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged()};
  }
};

