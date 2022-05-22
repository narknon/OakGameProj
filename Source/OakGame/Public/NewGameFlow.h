#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NewGameFlow.generated.h"

class UGbxMenuData;
class ACineCameraActor;
class AGbxLevelSequenceActor;
class UOakCinematicModeData;
class UMission;
class APlayerStandIn;
class UMaterialInterface;

UCLASS(Config=Game)
class OAKGAME_API ANewGameFlow : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<AGbxLevelSequenceActor> RockNRollSequence;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<UOakCinematicModeData> RockNRollCinematicMode;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<AGbxLevelSequenceActor> BusRideSequence;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<UOakCinematicModeData> BusRideCinematicMode;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<UOakCinematicModeData> CharacterSelectCinematicMode;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<ACineCameraActor> CharacterSelectCamera;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<UGbxMenuData> CharacterSelectMenu;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<APlayerStandIn> StandIn_Gunner;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<APlayerStandIn> StandIn_Siren;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<APlayerStandIn> StandIn_Beastmaster;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<APlayerStandIn> StandIn_Operative;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSubclassOf<UMission> InitialMission;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FLinearColor TransitionColor_ToRockNRoll;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FLinearColor TransitionColor_ToCharacterSelect;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FLinearColor TransitionColor_ToBusRide;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FLinearColor TransitionColor_ToGameplay;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float TimeOfDay;
    
    UPROPERTY(Config)
    float FadeDuration;
    
    UPROPERTY(EditInstanceOnly)
    FVector RnRInitialSceneViewLocation;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UMaterialInterface*> RnRInitialSceneMaterials;
    
    ANewGameFlow();
    UFUNCTION()
    void PushCharacterSelectMenu();
    
    UFUNCTION()
    void OnRockNRollStarted();
    
    UFUNCTION()
    void OnRockNRollFinished();
    
    UFUNCTION()
    void OnBusRideStarted();
    
    UFUNCTION()
    void OnBusRideFinished();
    
};

