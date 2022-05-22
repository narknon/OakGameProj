#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "EInWorldIconFadeType.h"
#include "EInWorldIconEdgeBehavior.h"
#include "EInWorldIconClassType.h"
#include "InWorldIconData.generated.h"

class UOakMinimapElement;

UCLASS(BlueprintType)
class UInWorldIconData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString IconFrameName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D IconSize;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsAreaWaypoint;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHasSpecialMinimapVersion;
    
    UPROPERTY(EditDefaultsOnly)
    bool bClampRadarEdge;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxClampDistance;
    
    UPROPERTY(EditDefaultsOnly)
    EInWorldIconClassType InWorldIconType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EInWorldIconEdgeBehavior EdgeBehavior;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseVisibilityRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EInWorldIconFadeType FadeType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HiddenDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisibleDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LifeTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UOakMinimapElement> MinimapIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UOakMinimapElement> MinimapAreaIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D WidgetSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D WidgetAlignment;
    
    UPROPERTY(EditDefaultsOnly)
    bool bStackable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float IconOffsetValue;
    
    UInWorldIconData();
};

