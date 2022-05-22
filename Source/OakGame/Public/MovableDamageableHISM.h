#pragma once
#include "CoreMinimal.h"
#include "DamageableHISM.h"
#include "UObject/NoExportTypes.h"
#include "MovableDamageableHISM.generated.h"

class UHierarchicalInstancedStaticMeshComponent;

UCLASS(Abstract)
class OAKGAME_API AMovableDamageableHISM : public ADamageableHISM {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector StartLocation;
    
    UPROPERTY(EditAnywhere)
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    int32 NumberbOfSM;
    
private:
    UPROPERTY(EditDefaultsOnly, Export)
    UHierarchicalInstancedStaticMeshComponent* MyHISM;
    
public:
    AMovableDamageableHISM();
    UFUNCTION(BlueprintCallable)
    void StopMovable();
    
    UFUNCTION(BlueprintCallable)
    void StartMovable();
    
};

