#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "GalaxyData.generated.h"

class UChallengeCategoryData;
class UPlanetData;
class UObject;

UCLASS(BlueprintType)
class OAKGAME_API UGalaxyData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSoftObjectPath GalaxyMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UPlanetData*> PlanetData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UChallengeCategoryData*> ProgressChallengeCategories;
    
    UGalaxyData();
    UFUNCTION(BlueprintCallable)
    static UPlanetData* GetPlanetForTrackedMission(UObject* WorldContextObject);
    
};

