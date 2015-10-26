#import "_MSImageCollection.h"

@interface MSImageCollection : _MSImageCollection
{
}

- (id)description;
- (id)imageWithSHA1:(id)arg1;
- (void)purgeImagesNotMatchingSHAs:(id)arg1;
- (id)imagesIndexedBySHAs:(id)arg1;
- (void)addImagesIndexedBySHA:(id)arg1;
- (void)addImageToIndex:(id)arg1;
- (id)addImage:(id)arg1 convertColourspace:(BOOL)arg2;
- (unsigned long long)uniqueImageCount;
- (id)treeAsDictionary;
- (void)restoreImageForItem:(id)arg1;
- (void)restoreImagesForItems:(id)arg1;

@end

