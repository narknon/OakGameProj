#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/GameplayStatics.h"
#include "ETeamCollisionChannel.h"
#include "UObject/NoExportTypes.h"
#include "GbxGameplayStatics.generated.h"

class APlayerController;
class AActor;
class USceneComponent;
class UGbxSkeletalMeshComponent;
class UObject;
class AGbxCharacter;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxGameplayStatics : public UGameplayStatics {
    GENERATED_BODY()
public:
    UGbxGameplayStatics();
    UFUNCTION(BlueprintCallable)
    static void SetTeamCollisionResponseWith(AActor* Actor, AActor* TeamActor, bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    static void SetTeamCollisionResponseToChannel(AActor* Actor, ETeamCollisionChannel Channel, bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    static void SetTeamCollisionChannelFrom(AActor* Actor, AActor* TeamActor, bool bOn);
    
    UFUNCTION(BlueprintCallable)
    static void SetTeamCollisionChannel(AActor* Actor, ETeamCollisionChannel Channel, bool bOn);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPlayerMaster(AActor* AIActor, AActor* PlayerMaster);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentTeamCollisionResponseWith(USceneComponent* Component, AActor* TeamActor, bool bIgnore, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentTeamCollisionResponseToChannel(USceneComponent* Component, ETeamCollisionChannel Channel, bool bIgnore, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentTeamCollisionChannel(USceneComponent* Component, ETeamCollisionChannel Channel, bool bOn, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    static void ProjectFromQueryToSimulation(const UGbxSkeletalMeshComponent* Component, const FName& BodyName, UPARAM(Ref) FVector& InOutHitPoint, UPARAM(Ref) FVector& InOutHitNormal);
    
    UFUNCTION(BlueprintPure)
    static APlayerController* GetPrimaryPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AGbxCharacter* GetAssociatedPrimaryCharacter(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FTransform AlignTransformToSurface(FTransform Transform, FVector SurfaceNormal);
    
};

