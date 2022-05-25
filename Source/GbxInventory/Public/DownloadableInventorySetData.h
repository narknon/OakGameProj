#pragma once
#include "CoreMinimal.h"
#include "DownloadableContentData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=DownloadableContentData -FallbackName=DownloadableContentData
#include "DownloadableInventorySetData.generated.h"

UCLASS()
class GBXINVENTORY_API UDownloadableInventorySetData : public UDownloadableContentData {
    GENERATED_BODY()
public:
    UDownloadableInventorySetData();
};

