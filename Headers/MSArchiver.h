#import "NSKeyedArchiver.h"

@class NSMutableSet;

@interface MSArchiver : NSKeyedArchiver
{
    BOOL _archiveObjectIDs;
    NSMutableSet *_archivedImages;
}

+ (BOOL)archiveRootObject:(id)arg1 withObjectIDs:(BOOL)arg2 toURL:(id)arg3;
+ (id)archivedDataWithHeaderAndRootObject:(id)arg1 withObjectIDs:(BOOL)arg2;
+ (id)archivedDataWithRootObject:(id)arg1 withObjectIDs:(BOOL)arg2;
@property(retain, nonatomic) NSMutableSet *archivedImages; // @synthesize archivedImages=_archivedImages;
@property(nonatomic) BOOL archiveObjectIDs; // @synthesize archiveObjectIDs=_archiveObjectIDs;
- (void).cxx_destruct;

@end

