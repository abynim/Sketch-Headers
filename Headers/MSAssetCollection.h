#import "_MSAssetCollection.h"

@interface MSAssetCollection : _MSAssetCollection
{
}

- (id)convertToInternalFormat:(id)arg1;
- (id)convertFromInternalFormat:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)indexOfObjectByComparingPointers:(id)arg1 inArray:(id)arg2;
- (BOOL)moveAssetAtIndex:(unsigned long long)arg1 beforeObjectAtIndex:(unsigned long long)arg2 ofType:(unsigned long long)arg3;
- (unsigned long long)indexOfAsset:(id)arg1;
- (id)arrayForType:(unsigned long long)arg1;
- (void)removeAssetAtIndex:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
- (id)assetAtIndex:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
- (void)addAsset:(id)arg1;
- (unsigned long long)numberOfAssetsOfType:(unsigned long long)arg1;

@end

