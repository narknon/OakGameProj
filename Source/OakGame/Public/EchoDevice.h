#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakWeapon.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WeaponRegisterAttachmentEffectData.h"
#include "EchoDevice.generated.h"

class UGbxCustomizationTargetData;
class UParticleSystemComponent;
class UDataTable;
class AOakCharacter_Player;
class UMaterialInstanceDynamic;
class UOakCustomizationComponent;
class UWwiseAudioComponent;
class UGbxAction_Anim;
class UWwiseEvent;
class UWwiseSwitch;
class UParticleSystem;
class UGbxCustomizationData;

UCLASS()
class AEchoDevice : public AOakWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AOakCharacter_Player* PlayerOwner;
    
    UPROPERTY(EditAnywhere)
    int32 ScreenMaterialIndex;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ProjectionFX1PComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ProjectionFX3PComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* InMenuFX3PComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* CloseMenuFX3PComponent;
    
private:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* ScreenMaterialPrivate;
    
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* AudioComponentPrivate;
    
public:
    UPROPERTY(EditAnywhere)
    UGbxCustomizationTargetData* EchoCustomizationTarget;
    
    UPROPERTY(EditAnywhere)
    FVector EquippedIdleCameraToEchoLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator EquippedIdleCameraToEchoRotationOffset;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_Anim> QuickFirstPersonUnequipAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_Anim> QuickFirstPersonEquipAction;
    
    UPROPERTY(EditAnywhere)
    float ProjectionFXDelayAfterIdle;
    
    UPROPERTY(EditAnywhere)
    FName MissionDeliveryOrientationRow;
    
protected:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* EquipSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* UnequipSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DPadPressSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DPadReleaseSound;
    
    UPROPERTY(EditAnywhere)
    FName DPadSoundSocket;
    
    UPROPERTY(EditAnywhere)
    float DPadDeadZone;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DPadSynthSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ConfirmSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ErrorSound;
    
    UPROPERTY(EditAnywhere)
    float ButtonPressDuration;
    
    UPROPERTY(EditAnywhere)
    UWwiseSwitch* SoundSetSwitch;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ProjectionSocketName;
    
    UPROPERTY(EditAnywhere)
    UDataTable* OrientationDataTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ScreenDataTable;
    
    UPROPERTY(EditAnywhere)
    FWeaponRegisterAttachmentEffectData ProjectionFX1P;
    
    UPROPERTY(EditAnywhere)
    FWeaponRegisterAttachmentEffectData ProjectionFX3P;
    
    UPROPERTY(EditAnywhere)
    FWeaponRegisterAttachmentEffectData InMenuFX3P;
    
    UPROPERTY(EditAnywhere)
    FWeaponRegisterAttachmentEffectData CloseMenuFX3P;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* BackdropOnAndLoopParticle;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* BackdropOffParticle;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* HalfWidthBackdropOnAndLoopParticle;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* HalfWidthBackdropOffParticle;
    
    UPROPERTY(EditAnywhere)
    float BackDropFXDepth;
    
    UPROPERTY(EditAnywhere)
    int32 BackDropTranslucencySortPriority;
    
    UPROPERTY(EditAnywhere)
    FName ProjectionFXPositionParameterName;
    
    UPROPERTY(EditAnywhere)
    float DefaultProjectionFXHeight;
    
public:
    AEchoDevice();
    UFUNCTION(BlueprintNativeEvent)
    void OnExitStatusMenu();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnterStatusMenu();
    
    UFUNCTION()
    void OnCustomizationRemoved(UGbxCustomizationData* Customization);
    
    UFUNCTION()
    void OnCustomizationApplied(UGbxCustomizationData* Customization);
    
};

