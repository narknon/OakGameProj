#pragma once
#include "CoreMinimal.h"
#include "WwiseExternalSourceMediaInfo.generated.h"

USTRUCT(BlueprintType)
struct WWISEAUDIO_API FWwiseExternalSourceMediaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ExternalSourceCookie;
    
    UPROPERTY(EditAnywhere)
    uint32 FileID;
    
    UPROPERTY(EditAnywhere)
    bool bLocalize;
    
    FWwiseExternalSourceMediaInfo();
};

