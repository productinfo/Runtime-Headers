/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNMutablePostalAddress : CNPostalAddress

@property (atomic, readwrite, copy) NSString *ISOCountryCode;
@property (atomic, readwrite, copy) NSString *city;
@property (atomic, readwrite, copy) NSString *country;
@property (atomic, readwrite, copy) NSString *postalCode;
@property (atomic, readwrite, copy) NSString *state;
@property (atomic, readwrite, copy) NSString *street;
@property (atomic, readwrite, copy) NSString *subAdministrativeArea;
@property (atomic, readwrite, copy) NSString *subLocality;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)freeze;

@end
