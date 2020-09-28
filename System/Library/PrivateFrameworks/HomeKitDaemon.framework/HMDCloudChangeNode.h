/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID, HMDCloudChange, NSMapTable;

@interface HMDCloudChangeNode : HMFObject {

	BOOL _forceDelete;
	BOOL _orphaned;
	NSString* _recordName;
	NSUUID* _uuid;
	NSUUID* _parentUuid;
	NSString* _type;
	HMDCloudChangeNode* _parent;
	HMDCloudChange* _change;
	NSMapTable* _children;

}

@property (nonatomic,copy) NSString * recordName;                             //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSUUID * parentUuid;                               //@synthesize parentUuid=_parentUuid - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL forceDelete;                              //@synthesize forceDelete=_forceDelete - In the implementation block
@property (nonatomic,readonly) BOOL orphaned;                                 //@synthesize orphaned=_orphaned - In the implementation block
@property (assign,nonatomic,__weak) HMDCloudChangeNode * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) HMDCloudChange * change;                         //@synthesize change=_change - In the implementation block
@property (nonatomic,retain) NSMapTable * children;                           //@synthesize children=_children - In the implementation block
+(id)shortDescription;
-(NSMapTable *)children;
-(void)setParent:(HMDCloudChangeNode *)arg1 ;
-(void)addChild:(id)arg1 ;
-(HMDCloudChangeNode *)parent;
-(id)shortDescription;
-(id)init;
-(NSString *)type;
-(void)setChange:(HMDCloudChange *)arg1 ;
-(void)setRecordName:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setType:(NSString *)arg1 ;
-(void)removeChild:(id)arg1 ;
-(void)setChildren:(NSMapTable *)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(NSString *)recordName;
-(id)description;
-(HMDCloudChange *)change;
-(NSUUID *)parentUuid;
-(id)_initWithUUID:(id)arg1 parentUUID:(id)arg2 recordName:(id)arg3 type:(id)arg4 change:(id)arg5 ;
-(id)initWithChange:(id)arg1 ;
-(BOOL)forceDelete;
-(void)logChangeTreeWithIndent:(id)arg1 ;
-(void)setParentUuid:(NSUUID *)arg1 ;
-(void)deleteChildren;
-(id)_allNodesInBranch;
-(void)_markBranchOrphaned;
-(id)initWithRecordMapping:(id)arg1 ;
-(id)initWithCloudRecord:(id)arg1 ;
-(void)updateRecordMapping:(id)arg1 ;
-(void)_updateWithModel:(id)arg1 ;
-(void)_updateWithChange:(id)arg1 ;
-(void)_updateWithCloudRecord:(id)arg1 ;
-(BOOL)orphaned;
@end
