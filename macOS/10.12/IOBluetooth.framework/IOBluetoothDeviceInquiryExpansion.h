/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothDeviceInquiryExpansion : NSObject {
    NSArray * _searchUUIDs;
    BOOL  joinedToDaemon;
    BOOL  rssiThreshold;
    int  searchType;
}

@property (atomic, readwrite) BOOL joinedToDaemon;
@property (atomic, readwrite) BOOL rssiThreshold;
@property (atomic, readwrite) int searchType;
@property (atomic, readwrite, copy) NSArray *searchUUIDs;

- (void)dealloc;
- (BOOL)joinedToDaemon;
- (BOOL)rssiThreshold;
- (int)searchType;
- (id)searchUUIDs;
- (void)setJoinedToDaemon:(BOOL)arg1;
- (void)setRssiThreshold:(BOOL)arg1;
- (void)setSearchType:(int)arg1;
- (void)setSearchUUIDs:(id)arg1;

@end