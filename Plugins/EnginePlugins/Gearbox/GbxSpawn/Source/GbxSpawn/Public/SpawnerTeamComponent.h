#pragma once
#include "CoreMinimal.h"
#include "TeamComponent.h"
#include "SpawnerTeamComponent.generated.h"

class UTeam;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXSPAWN_API USpawnerTeamComponent : public UTeamComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UTeam* OverrideTeam;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideTeam;
    
    UPROPERTY(Transient, VisibleAnywhere)
    FName ResolvedTeamType;
    
    UPROPERTY()
    UTeam* EvaluatedTeam;
    
public:
    USpawnerTeamComponent();
};

