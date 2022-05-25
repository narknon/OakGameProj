#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/PrimitiveComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HavokNavSeed -FallbackName=HavokNavSeed
#include "UObject/NoExportTypes.h"
#include "EGbxUserEdgeDirection.h"
#include "HavokUserEdgeComponent.h"
#include "HavokUserEdge.generated.h"

class USceneComponent;
class UHavokUserEdgeComponent;
class UGbxUserEdge;
class AActor;
class UHavokUserEdge;




UCLASS(ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UHavokUserEdge : public UPrimitiveComponent, public IHavokNavSeed {
};

