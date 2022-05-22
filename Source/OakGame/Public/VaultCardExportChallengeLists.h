#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VaultCardExportChallengeLists.generated.h"

class UDownloadableContentData;
class UChallenge;

USTRUCT()
struct FVaultCardExportChallengeLists {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDownloadableContentData* AssociatedDLC;
    
    UPROPERTY()
    TArray<TSubclassOf<UChallenge>> Challenges;
    
    OAKGAME_API FVaultCardExportChallengeLists();
};

