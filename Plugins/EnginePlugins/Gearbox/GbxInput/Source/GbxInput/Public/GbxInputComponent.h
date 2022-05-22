#pragma once
#include "CoreMinimal.h"
#include "Components/InputComponent.h"
#include "GbxInputActionReceiverInterface.h"
#include "GbxInputActionEventLookupList.h"
#include "UObject/NoExportTypes.h"
#include "GbxInputComponent.generated.h"

class UGbxInputKeyRebindData_Button;
class UGbxInputActionData_Discrete;
class UGbxInputRebindCategory;
class UGbxInputRebindContext;
class UGbxInputActionData_Continuous_Vector;

UCLASS(NonTransient, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class GBXINPUT_API UGbxInputComponent : public UInputComponent, public IGbxInputActionReceiverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, UGbxInputKeyRebindData_Button*> CommonInputMap;
    
private:
    UPROPERTY(EditDefaultsOnly)
    UGbxInputRebindCategory* RebindCategory;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxInputRebindContext* DefaultRebindContext;
    
    UPROPERTY(DuplicateTransient)
    FGbxInputActionEventLookupList InputActionEventLookupList;
    
    UPROPERTY(Transient)
    UGbxInputRebindContext* RebindContext;
    
public:
    UGbxInputComponent();
private:
    UFUNCTION()
    void StartInputConsumeKeyImpl();
    
    UFUNCTION(BlueprintCallable)
    void StartInputAction_Discrete_Impl(UGbxInputActionData_Discrete* DiscreteAction, bool bConsumeEvent);
    
    UFUNCTION(BlueprintCallable)
    void InputAction_Continuous_Vector_Impl(UGbxInputActionData_Continuous_Vector* AxisAction, const FVector& Value);
    
    
    // Fix for true pure virtual functions not being implemented
};

