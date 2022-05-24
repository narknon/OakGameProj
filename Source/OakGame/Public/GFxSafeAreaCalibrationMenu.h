#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GFxSafeAreaCalibrationMenu.generated.h"

class UGbxTextField;
class UGbxGFxObject;

UCLASS()
class UGFxSafeAreaCalibrationMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText SafeAreaTitle;
    
    UPROPERTY(EditAnywhere)
    FText SafeAreaDescrption;
    
    UPROPERTY(EditAnywhere)
    float SafeAreaStep;
    
    UPROPERTY(EditAnywhere)
    float DefaultSafeAreaPercent;
    
    UPROPERTY(Transient)
    UGbxTextField* TitleText;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SafeAreaBox;
    
    UPROPERTY(Transient)
    UGbxGFxObject* Background;
    
    UPROPERTY(Transient)
    UGbxGFxObject* HintBarWrapper;
    
public:
    UGFxSafeAreaCalibrationMenu();
};

