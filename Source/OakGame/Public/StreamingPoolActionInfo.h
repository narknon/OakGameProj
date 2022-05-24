#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "StreamingPoolActionInfo.generated.h"

class AOakPlayerController;
class UStreamingPoolActionInfo;
class UObject;

UCLASS(Abstract, Blueprintable)
class OAKGAME_API UStreamingPoolActionInfo : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ActionTitle;
    
    UPROPERTY(EditAnywhere)
    FText ActionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ActionValueMinMax;
    
    UStreamingPoolActionInfo();
    UFUNCTION(BlueprintCallable)
    static void SimulatePollActionSelected(TSoftClassPtr<UStreamingPoolActionInfo> PollActionClass, AOakPlayerController* PlayerOwner, UObject* Context, float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PollActionSelected(AOakPlayerController* PlayerOwner, UObject* Context, float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PollActionInitialized();
    
};

