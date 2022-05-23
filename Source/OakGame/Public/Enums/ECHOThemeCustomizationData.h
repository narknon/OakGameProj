#pragma once
#include "CoreMinimal.h"
#include "OakCustomizationData.h"
#include "ECHOThemeCustomizationData.generated.h"

class UWwiseEvent;

UCLASS()
class UECHOThemeCustomizationData : public UOakCustomizationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText InitializationText;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* EquipSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* UnequipSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DPadPressSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DPadReleaseSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DPadSynthSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ConfirmSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ErrorSound;
    
    UECHOThemeCustomizationData();
};

