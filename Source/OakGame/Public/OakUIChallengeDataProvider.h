#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "OakUIChallengeListData.h"
#include "EOakUIChallengeDataProviderPopulateType.h"
#include "OakUIChallengeDataProvider.generated.h"

class UZoneMapData;
class UChallengesComponent;
class AChallengeManager;
class UChallengeCategoryData;
class AOakPlayerController;
class UPlanetData;
class UChallenge;

UCLASS()
class OAKGAME_API UOakUIChallengeDataProvider : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString CompletedChallengeColor;
    
    UPROPERTY(EditAnywhere)
    UChallengeCategoryData* FallbackDisplaySortCategory;
    
    UPROPERTY(EditAnywhere)
    UChallengeCategoryData* GalacticChallengesCategory;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakPlayerController> OakPCOwner;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AChallengeManager> ChallengeManager;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UChallengesComponent> ChallengesComponent;
    
    UPROPERTY(Transient)
    TArray<FOakUIChallengeListData> ChallengeListData;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UPlanetData> CurrentPlanetData;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UZoneMapData> CurrentZoneData;
    
    UPROPERTY(Transient)
    bool bShowDiscoveredLocationsOnly;
    
    UPROPERTY(Transient)
    EOakUIChallengeDataProviderPopulateType CurrentPopulateType;
    
    UOakUIChallengeDataProvider();
private:
    UFUNCTION()
    void OnChallengeUpdated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass, int32 NewValue, bool bDisplayNotification, bool bCompleted);
    
    UFUNCTION()
    void OnChallengeCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass);
    
    UFUNCTION()
    void OnChallengeChildCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass);
    
    UFUNCTION()
    void OnChallengeActivated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass);
    
};

