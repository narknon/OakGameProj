#include "EchoDevice.h"
#include "OakCustomizationComponent.h"

class UGbxCustomizationData;

void AEchoDevice::OnExitStatusMenu_Implementation() {
}


void AEchoDevice::OnCustomizationRemoved(UGbxCustomizationData* Customization) {
}

void AEchoDevice::OnCustomizationApplied(UGbxCustomizationData* Customization) {
}

AEchoDevice::AEchoDevice() {
    this->PlayerOwner = NULL;
    this->ScreenMaterialIndex = 0;
    this->ProjectionFX1PComponent = NULL;
    this->ProjectionFX3PComponent = NULL;
    this->InMenuFX3PComponent = NULL;
    this->CloseMenuFX3PComponent = NULL;
    this->ScreenMaterialPrivate = NULL;
    this->AudioComponentPrivate = NULL;
    this->EchoCustomizationTarget = NULL;
    this->QuickFirstPersonUnequipAction = NULL;
    this->QuickFirstPersonEquipAction = NULL;
    this->ProjectionFXDelayAfterIdle = 0.04f;
    this->MissionDeliveryOrientationRow = TEXT("MissionDelivery");
    this->EquipSound = NULL;
    this->UnequipSound = NULL;
    this->DPadPressSound = NULL;
    this->DPadReleaseSound = NULL;
    this->DPadDeadZone = 0.40f;
    this->DPadSynthSound = NULL;
    this->ConfirmSound = NULL;
    this->ErrorSound = NULL;
    this->ButtonPressDuration = 0.10f;
    this->SoundSetSwitch = NULL;
    this->CustomizationComponent = CreateDefaultSubobject<UOakCustomizationComponent>(TEXT("CustomizationComponent"));
    this->ProjectionSocketName = TEXT("ProjectionOrigin");
    this->OrientationDataTable = NULL;
    this->ScreenDataTable = NULL;
    this->BackdropOnAndLoopParticle = NULL;
    this->BackdropOffParticle = NULL;
    this->HalfWidthBackdropOnAndLoopParticle = NULL;
    this->HalfWidthBackdropOffParticle = NULL;
    this->BackDropFXDepth = 60.00f;
    this->BackDropTranslucencySortPriority = 0;
    this->ProjectionFXPositionParameterName = TEXT("BeamTarget");
    this->DefaultProjectionFXHeight = 20.00f;
}

