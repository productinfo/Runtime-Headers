/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
 */

@interface ACProtobufDataclassAction : PBCodable <NSCopying> {
    NSMutableArray * _affectedContainers;
    BOOL  _destructive;
    int  _type;
}

@property (nonatomic, readwrite, retain) NSMutableArray *affectedContainers;
@property (nonatomic, readwrite) BOOL destructive;
@property (nonatomic, readwrite) int type;

+ (Class)affectedContainersType;

- (void).cxx_destruct;
- (void)addAffectedContainers:(id)arg1;
- (id)affectedContainers;
- (id)affectedContainersAtIndex:(unsigned long long)arg1;
- (unsigned long long)affectedContainersCount;
- (void)clearAffectedContainers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)destructive;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAffectedContainers:(id)arg1;
- (void)setDestructive:(BOOL)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
