#import "CHSingletonObject.h"

@class NSArray, NSBundle;

@interface MSModelResources : CHSingletonObject
{
    NSBundle *_bundle;
    NSArray *_noiseImages;
    unsigned long long _status;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *noiseImages; // @synthesize noiseImages=_noiseImages;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)resourcesNeedingMigration;
- (id)loadNoiseImageWithIndex:(long long)arg1;
- (void)preloadResources;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForImageResource:(id)arg1;

@end

