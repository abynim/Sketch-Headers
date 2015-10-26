#import "NSObject.h"

@class NSString;

@interface BCFilterInfo : NSObject
{
    NSString *_filterString;
    long long _filterType;
}

+ (id)keyPathsForValuesAffectingFilterSlices;
+ (id)keyPathsForValuesAffectingFilterLayers;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (void).cxx_destruct;
- (BOOL)shouldFilterNode:(id)arg1;
@property(nonatomic) BOOL filterSlices;
@property(nonatomic) BOOL filterLayers;
@property(readonly, nonatomic) BOOL hasFilter;
- (id)init;

@end

