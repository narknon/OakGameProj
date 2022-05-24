#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxExposeOnSpawnValueCache -FallbackName=GbxExposeOnSpawnValueCache
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxSpawnActorAsyncBlueprintDelegate__DelegateSignature -FallbackName=GbxSpawnActorAsyncBlueprintDelegateDelegate
#include "ThrowProjectileAsyncRequest.generated.h"

class AProjectile;
class AActor;

USTRUCT(BlueprintType)
struct FThrowProjectileAsyncRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AProjectile> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Source;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName SourceSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Target;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName TargetSocket;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector TargetOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MaxPrediction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float AnglePercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FRotator DirectionOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 InstanceCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float InstanceDelay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly)
    FGbxExposeOnSpawnValueCache ExposeOnSpawnCache;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FGbxSpawnActorAsyncBlueprintDelegate Spawned;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FGbxSpawnActorAsyncBlueprintDelegate Failed;
    
    GBXWEAPON_API FThrowProjectileAsyncRequest();
};

