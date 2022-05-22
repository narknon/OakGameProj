#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGFxListConfig.h"
#include "GFxBackpackWidgetConfig.generated.h"

class UGFxBackpackWidgetItem;
class AOakPlayerController;
class UGbxGFxObject;
class UGbxGFxMovie;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxBackpackWidgetConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString GridWidgetPath;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxListConfig GridWidgetConfig;
    
    UPROPERTY(EditAnywhere)
    int32 ItemBackpackSpaceMinIfInfinite;
    
    UPROPERTY(EditAnywhere)
    int32 NumBackpackIconsToKeep;
    
    UPROPERTY(EditAnywhere)
    int32 ItemBackpackSpaceMinLocked;
    
    UPROPERTY(EditAnywhere)
    int32 MinVisibleCells;
    
    UPROPERTY(EditAnywhere)
    int32 NumCellsToPreCreate;
    
    UPROPERTY(EditAnywhere)
    FString BackpackItemScaleformClass;
    
    UPROPERTY(EditAnywhere)
    FString EmptyBackpackItemScaleformClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGFxBackpackWidgetItem> ListItemNativeClass;
    
    UPROPERTY(EditAnywhere)
    FText ButtonHelpText;
    
    UPROPERTY(EditAnywhere)
    bool bUseTrashButtonStates;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakPlayerController> OakPC;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxMovie> OwningMovie;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxObject> GridWidgetParent;
    
    FGFxBackpackWidgetConfig();
};

