#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxAction.h"
#include "GbxAction_DodgePicker.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_DodgePicker : public UGbxAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> IdleLeft;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> IdleRight;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> MovingLeft;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> MovingLeftBackward;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> MovingLeftForward;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> MovingRight;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> MovingRightBackward;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> MovingRightForward;
    
public:
    UGbxAction_DodgePicker();
};

