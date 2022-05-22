#pragma once
#include "CoreMinimal.h"
#include "OakCharacterInputAbility.h"
#include "UObject/NoExportTypes.h"
#include "OakInputAbility_Player_Common.generated.h"

class UGbxInputActionData_Continuous_Vector;

UCLASS()
class UOakInputAbility_Player_Common : public UOakCharacterInputAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UGbxInputActionData_Continuous_Vector* LookActionData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxInputActionData_Continuous_Vector* MoveActionData;
    
public:
    UOakInputAbility_Player_Common();
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerMove(UGbxInputActionData_Continuous_Vector* ActionData, const FVector& Val);
    
    UFUNCTION(BlueprintCallable)
    void PlayerLook(UGbxInputActionData_Continuous_Vector* ActionData, const FVector& Val);
    
};

