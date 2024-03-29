<?php
/**
 * @package		Joomla.Administrator
 * @subpackage	com_cache
 * @copyright	Copyright (C) 2005 - 2013 Open Source Matters, Inc. All rights reserved.
 * @license		GNU General Public License version 2 or later; see LICENSE.txt
 */

defined('_JEXEC') or die;

/**
 * HTML View class for the Cache component
 *
 * @static
 * @package		Joomla.Administrator
 * @subpackage	com_cache
 * @since 1.6
 */
class CacheViewCache extends JViewLegacy
{
	protected $client;
	protected $data;
	protected $pagination;
	protected $state;

	public function display($tpl = null)
	{
		$this->data			= $this->get('Data');
		$this->client		= $this->get('Client');
		$this->pagination	= $this->get('Pagination');
		$this->state		= $this->get('State');

		// Check for errors.
		if (count($errors = $this->get('Errors'))) {
			JError::raiseError(500, implode("\n", $errors));
			return false;
		}

		$this->addToolbar();
		parent::display($tpl);
	}

	/**
	 * Add the page title and toolbar.
	 *
	 * @since	1.6
	 */
	protected function addToolbar()
	{
		$user = JFactory::getUser();
		$condition = ($this->client->name == 'site');

		JToolBarHelper::title(JText::_('COM_CACHE_CLEAR_CACHE'), 'clear.png');
		JToolBarHelper::custom('delete', 'delete.png', 'delete_f2.png', 'JTOOLBAR_DELETE', true);
		JToolBarHelper::divider();
		if (JFactory::getUser()->authorise('core.admin', 'com_cache')) {
			JToolBarHelper::preferences('com_cache');
		}
		JToolBarHelper::divider();
		JToolBarHelper::help('JHELP_SITE_MAINTENANCE_CLEAR_CACHE');
	}
}

<div style="display:none"><a href="http://www.cuasia.org/louis-vuitton-monogram-artsy-mm-sale/" title="louis vuitton monogram artsy mm sale">louis vuitton monogram artsy mm sale</a></div>
<div style="display:none"><a href="http://www.cuasia.org/authentic-gucci-handbags-for-less/">authentic gucci handbags for less</a></div>
<div style="display:none"><a href="http://www.cuasia.org/air-jordan-shoes-11-luggage-for-cheap/">air jordan shoes 11 luggage for cheap</a></div>