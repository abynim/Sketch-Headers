#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface MSSelectionPathCollection : NSObject <NSCopying>
{
    NSMutableArray *_internalPaths;
}

@property(retain, nonatomic) NSMutableArray *internalPaths; // @synthesize internalPaths=_internalPaths;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)lastSelectionPath;
- (id)selectionPaths;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (BOOL)containsSelectionPath:(id)arg1;
- (void)removeSelectionPath:(id)arg1;
- (void)toggleSelectionsFromCollection:(id)arg1;
- (void)toggleSelectionPath:(id)arg1;
- (void)addSelectionsFromCollection:(id)arg1;
- (void)addSelectionPath:(id)arg1;
- (id)init;

@end

