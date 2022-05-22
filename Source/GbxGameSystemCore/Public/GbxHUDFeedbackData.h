#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GbxHUDFeedbackData.generated.h"

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxHUDFeedbackData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MoveWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MoveAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MoveDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MoveMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D LookWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D LookAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D LookDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D LookMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GamepadLookMultiplier;
    
    UGbxHUDFeedbackData();
};

