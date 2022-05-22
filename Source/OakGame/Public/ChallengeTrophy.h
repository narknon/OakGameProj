#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChallengeTrophy.generated.h"

class UStaticMesh;
class UChallenge;
class UChallengeTrophyBaseComponent;

USTRUCT(BlueprintType)
struct FChallengeTrophy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TrophyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TrophyDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* TrophyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UChallenge> AssociatedChallenge;
    
    UPROPERTY(EditAnywhere)
    FName AssociatedTrophyBaseTag;
    
    UPROPERTY(Export, Transient)
    UChallengeTrophyBaseComponent* AssociatedTrophyBase;
    
    OAKGAME_API FChallengeTrophy();
};

