#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GlobalBoneModifyProfile.generated.h"

class UGlobalBoneModifyProfileState;

UCLASS()
class GBXGAMESYSTEMCORE_API UGlobalBoneModifyProfile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<UGlobalBoneModifyProfileState*> GlobalProfileSet;
    
    UGlobalBoneModifyProfile();
};

