#import "NSImage.h"

#import "MSAsset.h"

@class NSString;

@interface NSImage (Asset) <MSAsset>
- (unsigned long long)assetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

