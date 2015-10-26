#import "NSCollectionView.h"

@interface MSCollectionView : NSCollectionView
{
}

- (void)drawColumns;
- (void)drawRows;
- (void)drawRect:(struct CGRect)arg1;
- (id)newItemForRepresentedObject:(id)arg1;

@end

