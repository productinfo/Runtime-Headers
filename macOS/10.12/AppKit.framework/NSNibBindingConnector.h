/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNibBindingConnector : NSNibConnector <NSCoding> {
    NSString * _binding;
    NSString * _keyPath;
    struct __nibBindingConnectorFlags { 
        unsigned int _hasEstablishedConnection : 1; 
        unsigned int _reservedNibBindingConnector : 31; 
    }  _nibBindingConnectorFlags;
    NSDictionary * _options;
    NSNibBindingConnector * _previousConnector;
}

+ (void)initialize;

- (id)_previousNibBindingConnector;
- (void)_setPreviousNibBindingConnector:(id)arg1;
- (void)_updateForVersion:(long long)arg1;
- (void)_updateLabel;
- (id)binding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)establishConnection;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (id)keyPath;
- (id)options;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)setBinding:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setOptions:(id)arg1;

@end
