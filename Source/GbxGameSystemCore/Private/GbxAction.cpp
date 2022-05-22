#include "GbxAction.h"

class UObject;
class AActor;





bool UGbxAction::K2_GetVectorRegisterValue(const FName InName, FVector& OutVector) const {
    return false;
}

float UGbxAction::K2_GetTimeRemaining() const {
    return 0.0f;
}

bool UGbxAction::K2_GetObjectRegisterValue(const FName InName, UObject*& OutObject) const {
    return false;
}

bool UGbxAction::K2_GetNameRegisterValue(const FName InName, FName& OutName) const {
    return false;
}

float UGbxAction::K2_GetMaxCurrentTime() const {
    return 0.0f;
}

bool UGbxAction::K2_GetIntRegisterValue(const FName InName, int32& OutInt) const {
    return false;
}

bool UGbxAction::K2_GetFloatRegisterValue(const FName InName, float& OutFloat) const {
    return false;
}

float UGbxAction::K2_GetCurrentTime() const {
    return 0.0f;
}

float UGbxAction::K2_GetCurrentNormalizedTime() const {
    return 0.0f;
}

AActor* UGbxAction::K2_GetActor() const {
    return NULL;
}

UGbxAction::UGbxAction() {
    this->bCanUseCDO = false;
    this->ActionSlotName = TEXT("FullBody");
    this->ActionPriority = EGbxActionPriority::Normal;
}

