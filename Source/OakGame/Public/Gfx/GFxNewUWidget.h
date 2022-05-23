#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxNewUWidget.generated.h"

UCLASS()
class UGFxNewUWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FString GFxKEY_TitleField;
    
    UPROPERTY(EditAnywhere)
    FString GFxKEY_DescriptionField;
    
    UPROPERTY(EditAnywhere)
    FString GFxKEY_FeeField;
    
    UPROPERTY(EditAnywhere)
    FText TitleText;
    
    UPROPERTY(EditAnywhere)
    FText DescriptionText;
    
    UPROPERTY(EditAnywhere)
    FText FeeText;
    
    UPROPERTY(EditDefaultsOnly)
    FName OnShowSoundEntryName;
    
    UPROPERTY(EditDefaultsOnly)
    FName OnHideSoundEntryName;
    
    UPROPERTY(EditAnywhere)
    float TimeBeforeHide;
    
public:
    UGFxNewUWidget();
private:
    UFUNCTION()
    void OnOwnerResurrected(int32 CashLost) const;
    
};

