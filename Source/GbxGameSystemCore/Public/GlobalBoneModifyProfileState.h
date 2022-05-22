#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BMPOverride.h"
#include "GlobalBoneModifyProfileState.generated.h"

class USkeleton;
class ACharacter;

UCLASS(Const)
class GBXGAMESYSTEMCORE_API UGlobalBoneModifyProfileState : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBMPOverride DefaultTransform;
    
    UPROPERTY(EditAnywhere)
    TMap<TSoftObjectPtr<USkeleton>, FBMPOverride> SkeletonOverrides;
    
    UPROPERTY(EditAnywhere)
    TMap<TSoftClassPtr<ACharacter>, FBMPOverride> CharacterOverrides;
    
    UPROPERTY(EditAnywhere)
    TSet<TSoftObjectPtr<USkeleton>> SkeletonExceptions;
    
    UPROPERTY(EditAnywhere)
    TSet<TSoftClassPtr<ACharacter>> CharacterExceptions;
    
    UGlobalBoneModifyProfileState();
};

