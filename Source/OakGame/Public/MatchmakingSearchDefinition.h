#pragma once
#include "CoreMinimal.h"
#include "MatchmakingSearchParameters.h"
#include "MatchmakingRequirement.h"
#include "MatchmakingModifierSetData.h"
#include "MatchmakingSearchDefinition.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingSearchDefinition {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ActivityGuidString;
    
    UPROPERTY()
    FString ParentActivityGuidString;
    
    UPROPERTY()
    FString TitleKey;
    
    UPROPERTY()
    FString DescriptionKey;
    
    UPROPERTY()
    FString ImageId;
    
    UPROPERTY()
    FString HopperName;
    
    UPROPERTY()
    FString Version;
    
    UPROPERTY()
    TArray<FMatchmakingSearchParameters> OrderedSearches;
    
    UPROPERTY()
    TArray<FString> TravelStationPaths;
    
    UPROPERTY()
    TArray<FMatchmakingRequirement> MatchmakingRequirements;
    
    UPROPERTY()
    int32 MinPlayerCount;
    
    UPROPERTY()
    int32 MaxPlayerCount;
    
    UPROPERTY()
    TArray<FMatchmakingModifierSetData> ModifierSets;
    
    OAKGAME_API FMatchmakingSearchDefinition();
};

