/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.wamp (standalone).
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_TESTCASES_EXAMPLE10_Example_Interface_WAMP_STUB_ADAPTER_HPP_
#define V0_TESTCASES_EXAMPLE10_Example_Interface_WAMP_STUB_ADAPTER_HPP_

#include "v0/testcases/example10/ExampleInterfaceStub.hpp"
//#include "v0/testcases/example10/ExampleInterfaceWampDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Wamp/WampFactory.hpp>
#include <CommonAPI/Wamp/WampStubAdapterHelper.hpp>
#include <CommonAPI/Wamp/WampStubAdapter.hpp>
//#include <CommonAPI/Wamp/WampDeployment.hpp>

#include <CommonAPI/Wamp/WampConnection.hpp>
#include <CommonAPI/Wamp/WampClientId.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <autobahn/autobahn.hpp>

namespace v0 {
namespace testcases {
namespace example10 {

typedef CommonAPI::Wamp::WampStubAdapterHelper<ExampleInterfaceStub> ExampleInterfaceWampStubAdapterHelper;

class ExampleInterfaceWampStubAdapterInternal
	: public virtual ExampleInterfaceStubAdapter,
	  public ExampleInterfaceWampStubAdapterHelper
{
public:
	ExampleInterfaceWampStubAdapterInternal(
		const CommonAPI::Wamp::WampAddress &_address,
		const std::shared_ptr<CommonAPI::Wamp::WampProxyConnection> &_connection,
		const std::shared_ptr<CommonAPI::StubBase> &_stub);

	~ExampleInterfaceWampStubAdapterInternal();

	//////////////////////////////////////////////////////////////////////////////////////////

	virtual void provideRemoteMethods();

	void wrap_method1(autobahn::wamp_invocation invocation);
	void wrap_methodWithError1(autobahn::wamp_invocation invocation);


	//////////////////////////////////////////////////////////////////////////////////////////

	const ExampleInterfaceWampStubAdapterHelper::StubDispatcherTable& getStubDispatcherTable();
	const CommonAPI::Wamp::StubAttributeTable& getStubAttributeTable();

	void deactivateManagedInstances();

	static CommonAPI::Wamp::WampGetAttributeStubDispatcher<
		::v0::testcases::example10::ExampleInterfaceStub,
		CommonAPI::Version
	> getExampleInterfaceInterfaceVersionStubDispatcher;

private:
	ExampleInterfaceWampStubAdapterHelper::StubDispatcherTable stubDispatcherTable_;
	CommonAPI::Wamp::StubAttributeTable stubAttributeTable_;
};


class ExampleInterfaceWampStubAdapter
	: public ExampleInterfaceWampStubAdapterInternal,
	  public std::enable_shared_from_this<ExampleInterfaceWampStubAdapter> {
public:
	ExampleInterfaceWampStubAdapter(const CommonAPI::Wamp::WampAddress &_address,
											const std::shared_ptr<CommonAPI::Wamp::WampProxyConnection> &_connection,
											const std::shared_ptr<CommonAPI::StubBase> &_stub) 
		: CommonAPI::Wamp::WampStubAdapter(_address, _connection, false),
		  ExampleInterfaceWampStubAdapterInternal(_address, _connection, _stub) {
		std::cout << "ExampleInterfaceWampStubAdapter constructor called" << std::endl;
	}
};

} // namespace example10
} // namespace testcases
} // namespace v0

#endif // V0_TESTCASES_EXAMPLE10_Example_Interface_WAMP_STUB_ADAPTER_HPP_
