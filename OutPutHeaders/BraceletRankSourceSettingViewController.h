/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "IWCDevicePedometerSearchViewControllerExt.h"
#import "UIAlertViewDelegate.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "IWCDeviceBrandMgrExt.h"

@class NSString, MMTableView, NSMutableArray;

@interface BraceletRankSourceSettingViewController : MMUIViewController <IWCDeviceBrandMgrExt, UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, IWCDevicePedometerSearchViewControllerExt> {
	NSMutableArray* m_DataSourcList;
	map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int> > > m_mapSectionType;
	NSMutableArray* m_RowDataList;
	MMTableView* m_tableView;
	BOOL m_bNeedRecordDataNotify;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)onAddSportDevice:(id)device;
-(void)onGetSportDeviceListEnd:(id)end ErrorCode:(int)code;
-(void)onSwitchValueChange:(id)change;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)reloadTableData;
-(void)makeAddPedometerCell:(id)cell;
-(void)makeOriginalCell:(id)cell withTitle:(id)title;
-(void)makeSwitchCell:(id)cell;
-(void)viewDidLayoutSubviews;
-(void)initView;
-(void)updateTableSectionWithStepOnState:(BOOL)stepOnState;
-(void)resetSection;
-(void)initData;
-(void)viewDidLoad;
-(void)viewWillBePoped:(BOOL)view;
-(void)dealloc;
-(id)init;
@end

