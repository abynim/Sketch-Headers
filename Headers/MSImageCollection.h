#import "_MSImageCollection.h"

@interface MSImageCollection : _MSImageCollection
{
}

- (id)description;
- (id)imageWithSHA1:(id)arg1;
- (void)purgeImagesNotMatchingSHAs:(id)arg1;
- (id)rawImageDataIndexedBySHAs:(id)arg1;
- (void)addImageToIndexIfMissing:(id)arg1;
- (void)addRawImageDataIndexedBySHA:(id)arg1;
- (void)addImageToIndex:(id)arg1;
- (id)addNSImage:(id)arg1 convertColourspace:(BOOL)arg2;
- (unsigned long long)uniqueImageCount;
- (id)treeAsDictionary;

@end

