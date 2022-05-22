#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ChallengeList.generated.h"

class UDownloadableContentData;
class UChallenge;

UCLASS()
class GBXGAMESYSTEMCORE_API UChallengeList : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDownloadableContentData* AssociatedDLC;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UChallenge>> Challenges;
    
public:
    UChallengeList();
};

