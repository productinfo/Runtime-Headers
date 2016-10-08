/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface PFUbiquityPeerRange : NSManagedObject

@property (nonatomic, readwrite, retain) NSNumber *end;
@property (nonatomic, readwrite, retain) PFUbiquityPeer *peer;
@property (nonatomic, readwrite, retain) NSNumber *peerEnd;
@property (nonatomic, readwrite, retain) NSString *peerEntityName;
@property (nonatomic, readwrite, retain) NSNumber *peerStart;
@property (nonatomic, readwrite, retain) NSNumber *start;
@property (nonatomic, readwrite, retain) PFUbiquityStoreMetadata *storeMetadata;

// PFUbiquityPeerRange (UbiquityMethods)

- (void)loadFromBaselineDictionary:(id)arg1;

@end
