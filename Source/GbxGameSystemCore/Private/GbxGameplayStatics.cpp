#include "GbxGameplayStatics.h"

class AGbxCharacter;
class AActor;
class USceneComponent;
class UGbxSkeletalMeshComponent;
class APlayerController;
class UObject;

void UGbxGameplayStatics::SetTeamCollisionResponseWith(AActor* Actor, AActor* TeamActor, bool bIgnore) {
}

void UGbxGameplayStatics::SetTeamCollisionResponseToChannel(AActor* Actor, ETeamCollisionChannel Channel, bool bIgnore) {
}

void UGbxGameplayStatics::SetTeamCollisionChannelFrom(AActor* Actor, AActor* TeamActor, bool bOn) {
}

void UGbxGameplayStatics::SetTeamCollisionChannel(AActor* Actor, ETeamCollisionChannel Channel, bool bOn) {
}

bool UGbxGameplayStatics::SetPlayerMaster(AActor* AIActor, AActor* PlayerMaster) {
    return false;
}

void UGbxGameplayStatics::SetComponentTeamCollisionResponseWith(USceneComponent* Component, AActor* TeamActor, bool bIgnore, bool bPropagateToChildren) {
}

void UGbxGameplayStatics::SetComponentTeamCollisionResponseToChannel(USceneComponent* Component, ETeamCollisionChannel Channel, bool bIgnore, bool bPropagateToChildren) {
}

void UGbxGameplayStatics::SetComponentTeamCollisionChannel(USceneComponent* Component, ETeamCollisionChannel Channel, bool bOn, bool bPropagateToChildren) {
}

void UGbxGameplayStatics::ProjectFromQueryToSimulation(const UGbxSkeletalMeshComponent* Component, const FName& BodyName, FVector& InOutHitPoint, FVector& InOutHitNormal) {
}

APlayerController* UGbxGameplayStatics::GetPrimaryPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

AGbxCharacter* UGbxGameplayStatics::GetAssociatedPrimaryCharacter(AActor* Actor) {
    return NULL;
}

FTransform UGbxGameplayStatics::AlignTransformToSurface(FTransform Transform, FVector SurfaceNormal) {
    return FTransform{};
}

UGbxGameplayStatics::UGbxGameplayStatics() {
}

