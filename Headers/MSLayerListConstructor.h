#import "NSObject.h"

@class MSSourceListView, NSSet, NSString;

@interface MSLayerListConstructor : NSObject
{
    BOOL _includeLayers;
    BOOL _includeSlices;
    MSSourceListView *_listView;
    NSString *_searchTerm;
    NSSet *_selectedLayersAndParents;
    NSString *_containerKey;
}

@property(copy, nonatomic) NSString *containerKey; // @synthesize containerKey=_containerKey;
@property(retain, nonatomic) NSSet *selectedLayersAndParents; // @synthesize selectedLayersAndParents=_selectedLayersAndParents;
@property(nonatomic) BOOL includeSlices; // @synthesize includeSlices=_includeSlices;
@property(nonatomic) BOOL includeLayers; // @synthesize includeLayers=_includeLayers;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) MSSourceListView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (BOOL)itemIsExpanded:(id)arg1;
- (BOOL)shouldIncludeLayerAccordingToSearch:(id)arg1;
- (BOOL)shouldIncludeLayerInPreliminarySweep:(id)arg1;
- (id)layerItemsInGroup:(id)arg1 level:(long long)arg2;
- (id)layersListForDocument:(id)arg1;
- (id)init;

@end

