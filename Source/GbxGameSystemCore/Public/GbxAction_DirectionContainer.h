#pragma once
#include "CoreMinimal.h"
#include "EDirectionPlane.h"
#include "RelativeDirectionData.h"
#include "GbxAction.h"
#include "DirectionActionData.h"
#include "GbxAction_DirectionContainer.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_DirectionContainer : public UGbxAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FDirectionActionData> DirectionList;
    
    UPROPERTY(EditAnywhere)
    FRelativeDirectionData DirectionData;
    
    UPROPERTY(EditAnywhere)
    EDirectionPlane Plane;
    
public:
    UGbxAction_DirectionContainer();
};

