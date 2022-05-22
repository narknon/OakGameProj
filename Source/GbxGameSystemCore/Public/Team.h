#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GenericTeamAgentInterface.h"
#include "TeamAttitudeSetEntry.h"
#include "ETeamCollisionChannel.h"
#include "Team.generated.h"

class UTeam;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UTeam : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETeamAttitude::Type> SelfAttitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETeamAttitude::Type> DefaultAttitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETeamAttitude::Type> DefaultAttitudeFromTeams;
    
    UPROPERTY()
    bool bUseDefaultAttitudeFromTeams;
    
    UPROPERTY(EditAnywhere)
    TArray<FTeamAttitudeSetEntry> AttitudeTowardTeams;
    
    UPROPERTY(EditAnywhere)
    TArray<FTeamAttitudeSetEntry> AttitudeFromTeams;
    
    UPROPERTY(EditAnywhere)
    bool bEnableTeamCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    ETeamCollisionChannel TeamCollisionChannel;
    
    UTeam();
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetAttitudeToward(const UTeam* Team) const;
    
};

