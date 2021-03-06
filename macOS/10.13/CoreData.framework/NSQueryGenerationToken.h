/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>

+ (id)currentQueryGenerationToken;
+ (void)initialize;
+ (id)nostoresQueryGenerationToken;
+ (BOOL)supportsSecureCoding;
+ (id)unpinnedQueryGenerationToken;

- (id)_generationalComponentForStore:(id)arg1;
- (BOOL)_isUnmoored;
- (id)_storeIdentifier;
- (id)_storesForRequestRoutingFrom:(id)arg1 error:(id*)arg2;
- (id)_token;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)persistentStoreCoordinator;

@end
